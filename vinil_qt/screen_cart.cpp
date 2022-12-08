#include "screen_cart.h"
#include "cart.h"
#include "screen_home.h"
#include "screen_profile.h"
#include "ui_screen_cart.h"

std::vector<Vinyl> vinys;
screen_cart::screen_cart(QWidget *parent, int idVinyl) :
    QDialog(parent),
    ui(new Ui::screen_cart)
{
    ui->setupUi(this);

    std::vector<Music> musics1;
    Vinyl v1 = Vinyl(4,"GADOXX",musics1,"RAP","FROID","MAJOR",2022,1,90,"",1);

    std::vector<Music> musics2;
    Vinyl v2 = Vinyl(5,"RACIONALXX",musics2,"MPB","TIM MAIA","SEI TBM NÃO",1975,6,138,"",1);

    std::vector<Music> musics3;
    Vinyl v3 = Vinyl(6,"TARDEZINHAX",musics3,"PAGODIN","THIAGUIN","SEI NÃO",2017,7,120,"",1);

    std::vector<Music> musics4;
    Vinyl v4 = Vinyl(7,"HOT SPACEX",musics4,"POP","QUEEN","DE NOVO",1981,99,180,"",1);

    vinys.push_back(v1);
    vinys.push_back(v2);
    vinys.push_back(v3);
    vinys.push_back(v4);

    Client client = Client(78,"13176351674",
                               "Gilberto", "gilberto@gmail.com",
                               "mercio", 2,2);
    Cart cart = Cart(969,client,vinys,6);

    ui->lb_preco_total->setText("R$ "+QString::number(getDiscount()));


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

