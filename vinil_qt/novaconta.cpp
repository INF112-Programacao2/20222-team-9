#include "novaconta.h"
#include "ui_novaconta.h"
#include "QMessageBox"
#include "teste_login.h"
#include "home.h"

NovaConta::NovaConta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NovaConta)
{
    ui->setupUi(this);

    ui->lnConfirmarSenha->setEchoMode(QLineEdit::Password);
    ui->lnSenha->setEchoMode(QLineEdit::Password);
}

NovaConta::~NovaConta()
{
    delete ui;
}

void NovaConta::on_btnCriar_clicked()
{
    QString nome = ui->lnNome->text();
    QString CPF = ui->lnCPF->text();
    QString email = ui->lnEmail->text();
    QString senha = ui->lnSenha->text();
    QString confirmarsenha = ui->lnConfirmarSenha->text();
    QMessageBox::information(this, "Conexão com o Banco","\n" "Nome: " + nome + "\n" + "CPF: " + CPF + "\n" +
                             "Email: " + email + "\n" + "Senha: " + senha + "\n" + "ConfirmarSenha: " + confirmarsenha);

    home l;
    l.exec();
}

void NovaConta::on_btnLogin_clicked()
{
    Teste_Login l;
    l.exec();
}

