#include "screen_disc.h"
#include "dao_music.h"
#include "dao_vinyl.h"
#include "music.h"
#include "screen_cart.h"
#include "screen_home.h"
#include "ui_screen_disc.h"
#include "screen_profile.h"

#include <QPixmap>
#include <vector>
#include <QNetworkAccessManager>
#include <QNetworkReply>

#include <QtGui>
#include <QtNetwork>
#include <QDebug>

screen_disc::screen_disc(QWidget *parent, int idVinyl, int idClient) :
    QDialog(parent),
    ui(new Ui::screen_disc)
{
    ui->setupUi(this);

    this->idVinyl = idVinyl;
    this->idClient = idClient;

    DataSource dataSource;

    QSqlDatabase database_connection = dataSource.getConnection();
    DAOMusic daoMusic(database_connection);

    musics = daoMusic.readPlaylist(idVinyl);

    int contLines = 0;
    for (Music m : musics) {
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
    DataSource d;
    DAOVinyl daoVinyl(d.getConnection());
    Vinyl v = daoVinyl.readVinyl(idVinyl);

    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &screen_disc::downloadFinished);
    QString s = "http://localhost/img/"+v.getImageUrl();
    const QUrl url = QUrl(s);
    QNetworkRequest request(url);
    nam->get(request);


    ui->lb_cantor_disc->setText(v.getComposer());
    ui->lb_compositores_disc->setText(v.getFeaturing());
    ui->lb_data_disc->setText(QString::number(v.getReleaseYear()));
    ui->lb_preco_disc->setText("R$ "+QString::number(v.getPrice()));
    ui->lb_nome_album_disc->setText(v.getName());
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
    Music m = getMusic(idSel, musics);
    ui->lb_nome_musica_disc->setText(m.getName());

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
    screen_cart *s = new screen_cart(this, 0, idClient);
    s->show();
    hide();
}


void screen_disc::on_pb_home_home_clicked()
{
    screen_home *s = new screen_home(this,idClient);
    s->show();
    hide();
}

void screen_disc::downloadFinished(QNetworkReply *reply)
{
    QPixmap pm;
    pm.loadFromData(reply->readAll());
    ui->lb_imagem->setPixmap(pm);
}


void screen_disc::on_pb_adicionarCarrinho_clicked()
{
    screen_cart *s = new screen_cart(this, idVinyl ,idClient );
    s->show();
    hide();
}

