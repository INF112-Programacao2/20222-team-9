#include "screen_home.h"
#include "screen_cart.h"
#include "screen_disc.h"
#include "screen_profile.h"
#include "ui_screen_home.h"
#include "dao_vinyl.h"

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QPixmap>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <vector>




screen_home::screen_home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen_home)
{
    ui->setupUi(this);

    ui->frame->setHidden(true);

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

    Vinyl v2 = Vinyl(7,"HOT SPACEX",musics2,"POP","QUEEN","DE NOVO",1981,99,180,"",1);


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

    Vinyl v3 = Vinyl(7,"HOT SPACEX",musics3,"POP","QUEEN","DE NOVO",1981,99,180,"",1);

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

    Vinyl v4 = Vinyl(7,"HOT SPACEX",musics4,"POP","QUEEN","DE NOVO",1981,99,180,"",1);


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
}

screen_home::~screen_home()
{
    delete ui;
}


void screen_home::on_tableWidget_itemSelectionChanged()
{
    ui->frame->setHidden(false);
    int idSel = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();
    Vinyl v = getVinyl(idSel);
    ui->lb_nome_album->setText(v.getName());
    ui->lb_nome_cantor->setText(v.getComposer());
    ui->lb_ano_lancamento->setText(QString::number(v.getReleaseYear()));

    ui->lw_musicas->clear();
    std::vector<Music> musics = v.getPlaylist();

    int contLines = 0;
    for(Music m : musics){
        ui->lw_musicas->insertItem(contLines, m.getName());
    }

}

Vinyl screen_home::getVinyl(int id){
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

void screen_home::downloadFinished(QNetworkReply *reply)
{
    QPixmap pm;
    pm.loadFromData(reply->readAll());
    ui->lb_image_disc->setPixmap(pm);
}


void screen_home::on_pb_ver_album_clicked()
{
    int idSel = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();
    screen_disc *s = new screen_disc(this,idSel );
    s->show();
    hide();
}


void screen_home::on_pb_profile_home_clicked()
{
    int idUser = 0;
    screen_profile *s = new screen_profile(this,idUser );
    s->show();
    hide();
}


void screen_home::on_pb_cart_home_clicked()
{
    screen_cart *s = new screen_cart(this);
    s->show();
    hide();
}

