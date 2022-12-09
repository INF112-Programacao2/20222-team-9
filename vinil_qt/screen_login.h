#ifndef SCREEN_LOGIN_H
#define SCREEN_LOGIN_H

#include "screen_home.h"

#include <QDialog>

namespace Ui { class screen_login; }

class screen_login : public QDialog
{
    Q_OBJECT

public:
    screen_login(QWidget *parent = nullptr);
    ~screen_login();

private slots:
    void on_pushButton_clicked(); //"Slots named on_foo_bar are error prone" ??

private:
    Ui::screen_login *ui;
    screen_home *l;
};

#endif // SCREEN_LOGIN_H
