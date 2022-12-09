#include "screen_cart.h"
#include "cart.h"
#include "dao_vinyl.h"
#include "data_source.h"
#include "screen_home.h"
#include "screen_profile.h"
#include "ui_screen_cart.h"


screen_cart::screen_cart(QWidget *parent, int idVinyl, int idClient) :
    QDialog(parent),
    ui(new Ui::screen_cart)
{
    ui->setupUi(this);
    this->idClient = idClient;

    if(idVinyl!=0){
        DataSource dataSource;


        DAOVinyl daoVinyl(dataSource.getConnection());
        vinys.push_back(daoVinyl.readVinyl(idVinyl));
    }
    //Cart cart = Cart(0,client,vinys,0);

    ui->lb_preco_total->setText("R$ "+QString::number(getDiscount()));

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
    screen_home *s = new screen_home(this);
    s->show();
    hide();
}


void screen_cart::on_pb_profile_cart_clicked()
{
    int idUser = 0;
    screen_profile *s = new screen_profile(this,idUser );
    s->show();
    hide();
}


void screen_cart::on_tableWidget_itemSelectionChanged()
{
    ui->frame->setHidden(false);
    int idSel = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();

    Vinyl v = getVinyl(idSel);
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
double screen_cart::getDiscount(){
    double price=0;
    for (Vinyl v : vinys) {
        price += v.getPrice();
    }
    return price;
}

