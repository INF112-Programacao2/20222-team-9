#include "screen_new_account.h"
#include "ui_screen_new_account.h"
#include "dao_newuser.h"

#include <QMessageBox>
#include <QSqlDatabase>

#include "screen_login.h"
#include "ui_screen_login.h"
//#include "teste_login.h"

screen_new_account::screen_new_account(QWidget *parent) : QDialog(parent), ui(new Ui::screen_new_account)
{
    ui->setupUi(this);
}

screen_new_account::~screen_new_account()
{
    delete ui;
}

void screen_new_account::on_pb_inserir_clicked()
{
    QString nome = ui->ln_nome->text();
    QString cpf = ui->ln_cpf->text();
    QString senha = ui->ln_senha->text();
    QString confirmarsenha = ui->ln_confirmar_senha->text();
    QString email = ui->ln_email->text();
    int vip;
    int rank = 0;

    bool checkVipTrue,checkVipFalse;

        checkVipTrue=ui->radioButton->isChecked();
        checkVipFalse=ui->radioButton_2->isChecked();

        if(checkVipTrue){
            vip=1;
        }else{
            if(checkVipFalse){
                vip=0;
            }
        }

    newUserDAO daoUser;

    if(senha != confirmarsenha)
    {
       QMessageBox::information(this, "Erro", "As senhas não são iguais. Tente novamente!");
    }
    else
    {

        if(daoUser.inserirUsuario(nome,cpf,senha,email,vip,rank))
        {
            QMessageBox::information(this, "Conexão com o Banco", "INSERIDO NE PATRAO");
        }
        else
        {
            QMessageBox::information(this, "Conexão com o Banco", "DEU RUIM");
        }
     }
}

void screen_new_account::on_pb_inserir_2_clicked()
{
    screen_login *s = new screen_login(this);
    s->show();
    hide();

}

