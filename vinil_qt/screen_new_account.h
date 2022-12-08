#ifndef SCREEN_NEW_ACCOUNT_H
#define SCREEN_NEW_ACCOUNT_H

#include "teste_login.h"

#include <QDialog>

namespace Ui { class screen_new_account; }

class screen_new_account : public QDialog
{
    Q_OBJECT

public:
    explicit screen_new_account(QWidget *parent = nullptr);
    ~screen_new_account();

private slots:
    void on_pb_inserir_clicked();
    void on_pb_inserir_2_clicked();

private:
    Ui::screen_new_account *ui;
    Teste_Login *l;
};

#endif // SCREEN_NEW_ACCOUNT_H
