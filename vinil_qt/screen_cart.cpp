#include "screen_cart.h"
#include "cart.h"
#include "dao_cart.h"
#include "dao_client.h"
#include "dao_purchase.h"
#include "dao_vinyl.h"
#include "data_source.h"
#include "screen_home.h"
#include "screen_profile.h"
#include "ui_screen_cart.h"
#include <QMessageBox>
#include "vip_purchase.h"
#include "screen_completed_purchase.h"

#include <QTableWidget>
#include <QTableWidgetItem>

screen_cart::screen_cart(QWidget *parent, int idClient) :
    QDialog(parent),
    ui(new Ui::screen_cart)
{
    ui->setupUi(this);
    this->idClient = idClient;

    DataSource dataSource;

    QSqlDatabase database_connection = dataSource.getConnection();

    DAOClient daoClient(dataSource.getConnection());
    Client client = daoClient.readClient(idClient);

    DAOCart daoCart(dataSource.getConnection());
    this->cart = daoCart.readCart(idClient);
    cart.setTotal(getValorTotal());

    DAOVinyl daoVinyl(dataSource.getConnection());
    vinys = daoVinyl.readCartItems(cart.getId());
    if(client.getVip()){
        (vipP) = new VIPPurchase(cart);
        (*vipP).calculateDiscount();
        ui->lb_desconto->setText(QString::number((*vipP).getDiscount()));
        cart.setTotal(cart.getTotal()-(*vipP).getDiscount());
    }else{
        ui->lb_desconto->setText("");
        ui->lb_txt_desconto->setText("");
    }

    //Cart cart = Cart(0,client,vinys,0);

    ui->lb_preco_total->setText("R$ "+QString::number(getValorTotal()));

    //ui->tableWidget->clear();
    int contLines = 0;
    for(Vinyl v : vinys){
        ui->tableWidget->insertRow(contLines);
        ui->tableWidget->setItem(contLines, 0,
                                 new QTableWidgetItem(QString::number(v.getId())));
        ui->tableWidget->setColumnWidth(0,20);
        ui->tableWidget->setItem(contLines, 1, new QTableWidgetItem(v.getComposer()));
        ui->tableWidget->setItem(contLines, 2, new QTableWidgetItem(v.getName()));
        ui->tableWidget->setItem(contLines, 3,
                                 new QTableWidgetItem("R$ "+QString::number(v.getPrice())));
        ui->tableWidget->setRowHeight(contLines, 20);
    }


}

screen_cart::~screen_cart()
{
    delete ui;
}

void screen_cart::on_pb_home_cart_clicked()
{
    screen_home *s = new screen_home(this,idClient);
    s->show();
    hide();
}


void screen_cart::on_pb_profile_cart_clicked()
{
    screen_profile *s = new screen_profile(this,idClient );
    s->show();
    hide();
}


void screen_cart::on_tableWidget_itemSelectionChanged()
{
    ui->frame->setHidden(false);
    int idSel = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();
    Vinyl v = getVinyl(idSel);

    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &screen_cart::downloadFinished);


    QString s = "http://localhost/img/"+v.getImageUrl();
    const QUrl url = QUrl(s);
    QNetworkRequest request(url);
    nam->get(request);

    ui->lb_nome_album_cart->setText(v.getName());
    ui->lb_nome_cantor_cart->setText(v.getComposer());
    ui->lb_ano_lancamento_cart->setText(QString::number(v.getReleaseYear()));
    ui->lb_price_cart->setText("R$ "+ QString::number(v.getPrice()));

}
Vinyl screen_cart::getVinyl(int id){
    int i = 0;
    for (Vinyl v : vinys) {
      if (v.getId() == id) {
        return v;
      }
      i++;
    }
    Vinyl v = Vinyl();
    return (v);
}
void screen_cart::downloadFinished(QNetworkReply *reply){
    QPixmap pm;
    pm.loadFromData(reply->readAll());
    ui->lb_imagem->setPixmap(pm);
}
double screen_cart::getValorTotal(){
    double price=0;
    for (Vinyl v : vinys) {
        price += v.getPrice();
    }
    return price;
}


void screen_cart::on_pb_finalizar_clicked()
{
    DataSource ds;
    DAOPurchase daoPurchase(ds.getConnection());

    Purchase p(cart);
    daoPurchase.createPurchase(p);

    screen_completed_purchase *s = new screen_completed_purchase(this, idClient);
    s->show();
    hide();

}

