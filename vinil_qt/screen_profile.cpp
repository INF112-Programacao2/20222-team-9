#include "screen_profile.h"
#include "common_client.h"
#include "dao_vinyl.h"
#include "music.h"
#include "screen_cart.h"
#include "screen_home.h"
#include "screen_login.h"
#include "ui_screen_profile.h"
#include "vinyl.h"
#include "dao_client.h"
#include "vip_client.h"

screen_profile::screen_profile(QWidget *parent, int idClient) :
    QDialog(parent),
    ui(new Ui::screen_profile)
{
    ui->setupUi(this);
    this->idClient = idClient;

    DataSource ds;
    DAOVinyl daoVinyl(ds.getConnection());

    vinys = daoVinyl.readVinylCollection(idClient);
    //vinys = daoVinyl.readVinylsForSale();



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

    DAOClient daoClient(ds.getConnection());

    Client c = daoClient.readClient(idClient);
    ui->lb_cpf->setText(c.getCpf());
    ui->lb_email->setText(c.getEmail());
    ui->lb_nome->setText(c.getName());

    if(c.getVip()==0){
        CommonClient cm(c.getId(),c.getCpf(), c.getName(), c.getEmail(), c.getPassword(), c.getVip(),c.getRank());
        ui->lb_rank->setText("");
        ui->lb_txt_rank->setText("");
    }else{
        //VIPClient(int id, QString cpf, QString name, QString email, QString password, int vip, int rank);
        VIPClient vc(c.getId(),c.getCpf(), c.getName(), c.getEmail(), c.getPassword(), c.getVip(),c.getRank());
        if(vc.getRank() == 0){
            ui->lb_rank->setText("NOOB");
        }
        else if(vc.getRank() == 1){
            ui->lb_rank->setText("PRATA");
        }else if(vc.getRank() == 2){
            ui->lb_rank->setText("OURO");
        }else if(vc.getRank() == 3){
            ui->lb_rank->setText("DIAMANTE");
        }
    }


}

screen_profile::~screen_profile()
{
    delete ui;
}


void screen_profile::on_pb_home_profile_clicked()
{
    screen_home *s = new screen_home(this,idClient);
    s->show();
    hide();
}


void screen_profile::on_pb_cart_profile_clicked()
{
    screen_cart *s = new screen_cart(this,idClient);
    s->show();
    hide();

}

void screen_profile::on_btn_Logout_clicked()
{
    screen_login *s = new screen_login(this);
    s->show();
    hide();
}

