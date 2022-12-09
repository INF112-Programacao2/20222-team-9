#include "screen_profile.h"
#include "music.h"
#include "screen_cart.h"
#include "screen_home.h"
#include "ui_screen_profile.h"
#include "vinyl.h"
#include "screen_login.h"

screen_profile::screen_profile(QWidget *parent, int idClient) :
    QDialog(parent),
    ui(new Ui::screen_profile)
{
    ui->setupUi(this);
    this->idClient = idClient;

    std::vector<Music> musics1;
    Music m1 = Music(2,"MUSIC 1",5.6);
    Music m2 = Music(2,"MUSIC 2",6);
    Music m3 = Music(2,"MUSIC 3",3);
    Music m4 = Music(2,"MUSIC 4",9.6);
    Music m5 = Music(2,"MUSIC 5",11.6);

    musics1.push_back(m1);
    musics1.push_back(m2);
    musics1.push_back(m2);
    musics1.push_back(m3);
    musics1.push_back(m4);
    musics1.push_back(m5);


    Vinyl v1 = Vinyl(7,"HOT SPACEX",musics1,"POP","QUEEN","DE NOVO",1981,99,180,"",1);

    std::vector<Music> musics2;
    m1 = Music(2,"D MUSIC 1",23);
    m2 = Music(2,"D MUSIC 2",1.4);
    m3 = Music(2,"D MUSIC 3",5.6);
    m4 = Music(2,"D MUSIC 4",7.1);

    musics2.push_back(m1);
    musics2.push_back(m2);
    musics2.push_back(m2);
    musics2.push_back(m3);
    musics2.push_back(m4);


    Vinyl v2 =Vinyl(7,"HOT SPACEX",musics2,"POP","QUEEN","DE NOVO",1981,99,180,"",1);


    std::vector<Music> musics3;
    m1 = Music(2,"TT MUSIC 1",5.4);
    m2 = Music(2,"TT MUSIC 2",5.8);
    m3 = Music(2,"TT MUSIC 3",9);
    m4 = Music(2,"TT MUSIC 4",3.4);

    musics3.push_back(m1);
    musics3.push_back(m2);
    musics3.push_back(m2);
    musics3.push_back(m3);
    musics3.push_back(m4);

    Vinyl v3 = Vinyl(7,"HOT SPACEX",musics2,"POP","QUEEN","DE NOVO",1981,99,180,"",1);
    std::vector<Music> musics4;
    m1 = Music(2,"FFF MUSIC 1",5.6);
    m2 = Music(2,"FFF MUSIC 2",5);
    m3 = Music(2,"FFF MUSIC 3",7);
    m4 = Music(2,"FFF MUSIC 4",3.6);
    m5 = Music(2,"FFF MUSIC 4",1.3);

    musics4.push_back(m1);
    musics4.push_back(m2);
    musics4.push_back(m2);
    musics4.push_back(m3);
    musics4.push_back(m5);

    Vinyl v4 =Vinyl(7,"HOT SPACEX",musics4,"POP","QUEEN","DE NOVO",1981,99,180,"",1);


    vinys.push_back(v1);
    vinys.push_back(v2);
    vinys.push_back(v3);
    vinys.push_back(v4);



    int contLines = 0;
    for(Vinyl v : vinys){
        ui->tableWidget->insertRow(contLines);
        ui->tableWidget->setItem(contLines, 0, new QTableWidgetItem(QString::number(v.getId())));
        ui->tableWidget->setColumnWidth(0,20);
        ui->tableWidget->setItem(contLines, 1, new QTableWidgetItem(v.getComposer()));
        ui->tableWidget->setItem(contLines, 2, new QTableWidgetItem(v.getName()));
        ui->tableWidget->setItem(contLines, 3, new QTableWidgetItem(QString::number(v.getReleaseYear())));
        ui->tableWidget->setRowHeight(contLines, 20);
    }


    Client c = getClient(1);
    ui->lb_cpf->setText(c.getCpf());
    ui->lb_email->setText(c.getEmail());
    ui->lb_nome->setText(c.getName());
    ui->lb_rank->setText("RANK PRATA");
}

screen_profile::~screen_profile()
{
    delete ui;
}


void screen_profile::on_pb_home_profile_clicked()
{
    screen_home *s = new screen_home(this);
    s->show();
    hide();
}


void screen_profile::on_pb_cart_profile_clicked()
{
    screen_cart *s = new screen_cart(this);
    s->show();
    hide();

}
Client screen_profile::getClient(int id){
    Client client = Client(78,"13176351674",
                               "Gilberto", "gilberto@gmail.com",
                               "mercio", 2,2);


    return client;
}


void screen_profile::on_btn_Logout_clicked()
{
    screen_login *s = new screen_login(this);
    s->show();
    hide();
}

