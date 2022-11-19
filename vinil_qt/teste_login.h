#ifndef TESTE_LOGIN_H
#define TESTE_LOGIN_H

#include <QDialog>

namespace Ui { class Teste_Login; }

class Teste_Login : public QDialog
{
    Q_OBJECT

public:
    explicit Teste_Login(QWidget *parent = nullptr);
    ~Teste_Login();

private slots:
    void on_pushButton_clicked(); //"Slots named on_foo_bar are error prone" ??

private:
    Ui::Teste_Login *ui;
};

#endif // TESTE_LOGIN_H
