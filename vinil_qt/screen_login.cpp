#include "screen_login.h"
#include "ui_teste_login.h"
#include "TesteUserDAO.h"

#include "QMessageBox"
#include "QSqlQuery"

screen_login::screen_login(QWidget *parent) : QDialog(parent), ui(new Ui::screen_login)
{
    ui->setupUi(this);

}

screen_login::~screen_login()
{
    delete ui;
}

void screen_login::on_pushButton_clicked()
{
    ui->tx_cpf->text();
    QMessageBox::information(this, "DADOS CARREGADOS",
                                 "CPF " + ui->tx_cpf->text()
                                 +"\n"+
                                 "SENHA "+ui->tx_senha->text());

    QString cpf = ui->tx_cpf->text();
    QString senha = ui->tx_senha->text();

    //long id = 0; //não está sendo utilizado
    QString nome = "";

    TesteUserDAO daoUser;

    if(daoUser.loginUsuario(cpf,senha))
    {
        QMessageBox::information(this, "Conexão com o Banco", "LOGIN FEITO EM PATRÃO");
        hide();
        l = new screen_home(this);
        l->show();
        hide();
    }
    else
    {
        QMessageBox::information(this, "Conexão com o Banco", "LOGIN DEU CERTO NÃO NÉ PATRÃO");

    }
}

