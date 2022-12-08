#ifndef SCREEN_PROFILE_H
#define SCREEN_PROFILE_H

#include "client.h"
#include "vinyl.h"
#include <QDialog>
#include "teste_login.h"

namespace Ui {
class screen_profile;
}

class screen_profile : public QDialog
{
    Q_OBJECT

public:
    explicit screen_profile(QWidget *parent = nullptr, int idUser = 0);
    ~screen_profile();
    std::vector<Vinyl> vinys;

private slots:
    void on_pb_home_profile_clicked();

    void on_pb_cart_profile_clicked();
    Client getClient(int id);

    void on_btn_Logout_clicked();

private:
    Ui::screen_profile *ui;
};

#endif // SCREEN_PROFILE_H