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
#include <vector>




screen_home::screen_home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen_home)
{
    ui->setupUi(this);

    ui->frame->setHidden(true);

    DataSource dataSource;

    QSqlDatabase database_connection = dataSource.createConnection();

    DAOVinyl daoVinyl(database_connection);
    vinys = daoVinyl.readVinylsForSale();



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

