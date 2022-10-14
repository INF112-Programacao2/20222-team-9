#ifndef LOGIN_TESTE_H
#define LOGIN_TESTE_H

#include <QDialog>

namespace Ui {
class Login_Teste;
}

class Login_Teste : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Teste(QWidget *parent = nullptr);
    ~Login_Teste();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login_Teste *ui;
};

#endif // LOGIN_TESTE_H
