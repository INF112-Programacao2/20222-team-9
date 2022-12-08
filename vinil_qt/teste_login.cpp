#include "teste_login.h"
#include "ui_teste_login.h"
#include "TesteUserDAO.h"

#include "QMessageBox"
#include "QSqlQuery"

Teste_Login::Teste_Login(QWidget *parent) : QDialog(parent), ui(new Ui::Teste_Login)
{
    ui->setupUi(this);

}

Teste_Login::~Teste_Login()
{
    delete ui;
}

void Teste_Login::on_pushButton_clicked()
{
    ui->tx_cpf->text();
    QMessageBox::information(this, "DADOS CARREGADOS",
                                 "CPF " + ui->tx_cpf->text()
                                 +"\n"+
                                 "SENHA "+ui->tx_senha->text());

    QString cpf = ui->tx_cpf->text();
    QString senha = ui->tx_senha->text();;

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

