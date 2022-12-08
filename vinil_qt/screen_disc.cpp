#include "screen_disc.h"
#include "music.h"
#include "screen_cart.h"
#include "screen_home.h"
#include "ui_screen_disc.h"
#include "screen_profile.h"

std::vector<Music> musics4;
screen_disc::screen_disc(QWidget *parent, int idVinyl) :
    QDialog(parent),
    ui(new Ui::screen_disc)
{
    ui->setupUi(this);

    Music m1 = Music(1,"MUSIC 1",5.6);
    Music m2 = Music(2,"MUSIC 2",6);
    Music m3 = Music(3,"MUSIC 3",3);
    Music m4 = Music(4,"MUSIC 4",9.6);
    Music m5 = Music(5,"MUSIC 5",11.6);


    Vinyl v = getVinyl(idVinyl);
    ui->lb_cantor_disc->setText(v.getComposer());
    ui->lb_nome_album_disc->setText(v.getName());
    ui->lb_compositores_disc->setText(v.getFeaturing());
    ui->lb_data_disc->setText(QString::number(v.getReleaseYear()));
    ui->lb_preco_disc->setText("R$ "+QString::number(v.getPrice()));


    musics4.push_back(m1);
    musics4.push_back(m2);
    musics4.push_back(m2);
    musics4.push_back(m3);
    musics4.push_back(m5);

    int contLines = 0;
    for (Music m : musics4) {
      ui->tw_musics_disc->insertRow(contLines);

      ui->tw_musics_disc->setItem(
          contLines, 0, new QTableWidgetItem(QString::number(m.getId())));
      ui->tw_musics_disc->setColumnWidth(0, 0);

      ui->tw_musics_disc->setItem(
          contLines, 1, new QTableWidgetItem(QString::number(m.getDuration())));
      ui->tw_musics_disc->setColumnWidth(1, 150);

      ui->tw_musics_disc->setItem(contLines, 2,
                                  new QTableWidgetItem(m.getName()));

      ui->tw_musics_disc->setRowHeight(contLines, 20);
    }
}

screen_disc::~screen_disc()
{
    delete ui;
}

void screen_disc::on_pb_perfil_disc_clicked()
{
    int idUser = 0;
    screen_profile *s = new screen_profile(this,idUser );
    s->show();
    hide();
}


void screen_disc::on_pb_cart_disc_clicked()
{

}


void screen_disc::on_tw_musics_disc_itemSelectionChanged()
{
    ui->frame->setHidden(false);
    int idSel = ui->tw_musics_disc->item(ui->tw_musics_disc->currentRow(),0)->text().toInt();
    Music m = getMusic(idSel, musics4);
    ui->lb_nome_musica_disc->setText(m.getName());

}
Vinyl screen_disc::getVinyl(int id){
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
    Vinyl v1 = Vinyl(7,"HOT SPACEX",musics4,"POP","QUEEN","DE NOVO",1981,99,180,"",1);
   //Vinyl v1 = Vinyl(4,"GADOXX",musics1,"RAP","FROID","MAJOR",2022,1,90);
   return v1;
}
Music screen_disc::getMusic(int id, std::vector<Music> musics){
   int i = 0;
   for (Music m : musics) {
     if (m.getId() == id) {
       return m;
     }
     i++;
   }
   Music m = Music();
   return (m);
}

void screen_disc::on_pb_cart_home_clicked()
{
    screen_cart *s = new screen_cart(this);
    s->show();
    hide();
}


void screen_disc::on_pb_home_home_clicked()
{
    screen_home *s = new screen_home(this);
    s->show();
    hide();
}

