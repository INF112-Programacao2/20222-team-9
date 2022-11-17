#include "inserirusuario.h"
#include "ui_inserirusuario.h"
#include "QMessageBox"
#include "QtSql"
#include "QSqlDatabase"
#include "TesteUserDAO.h"

InserirUsuario::InserirUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InserirUsuario)
{
    ui->setupUi(this);
}

InserirUsuario::~InserirUsuario()
{
    delete ui;
}

void InserirUsuario::on_pb_inserir_clicked()
{
    QString nome = ui->ln_nome->text();
    QString cpf = ui->ln_cpf->text();
    QString senha = ui->ln_senha->text();


    TesteUserDAO daoUser;

    if(daoUser.inserirUsuario(nome, cpf,senha)){
        QMessageBox::information(this, "Conexão com o Banco", "INSERIDO NE PATRAO");
    }else{
        QMessageBox::information(this, "Conexão com o Banco", "DEU RUIM");
    }   
}
