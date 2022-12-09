#ifndef SCREEN_LOGIN_H
#define SCREEN_LOGIN_H

#include <QDialog>

namespace Ui {
class screen_login;
}

class screen_login : public QDialog
{
    Q_OBJECT

public:
    explicit screen_login(QWidget *parent = nullptr);
    ~screen_login();

private slots:
    void on_pb_login_clicked();

private:
    Ui::screen_login *ui;
};

#endif // SCREEN_LOGIN_H
