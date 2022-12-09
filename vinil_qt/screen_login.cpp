#include "screen_login.h"
#include "dao_cart.h"
#include "dao_client.h"
#include "data_source.h"
#include "screen_home.h"
#include "ui_screen_login.h"
#include "QMessageBox"
screen_login::screen_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen_login)
{
    ui->setupUi(this);
}

screen_login::~screen_login()
{
    delete ui;
}

void screen_login::on_pb_login_clicked()
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

        //TesteUserDAO daoUser;
        DataSource ds;
        ds.createConnection();
        DAOClient daoClient(ds.getConnection());

        Client client = daoClient.loginClient(cpf,senha);
        if ( client.getId() != 0) {
          QMessageBox::information(this, "Conexão com o Banco",
                                   "LOGIN FEITO EM PATRÃO");

          DAOCart daoCart(ds.getConnection());
          daoCart.createCart(client);
          screen_home *s = new screen_home(this,client.getId());
          s->show();
          hide();
        } else {
          QMessageBox::information(this, "Conexão com o Banco",
                                   "LOGIN DEU CERTO NÃO NÉ PATRÃO");
        }
}

