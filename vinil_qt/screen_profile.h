#ifndef SCREEN_PROFILE_H
#define SCREEN_PROFILE_H

#include "client.h"
#include "vinyl.h"
#include <QDialog>


namespace Ui {
class screen_profile;
}

class screen_profile : public QDialog
{
    Q_OBJECT

public:
    explicit screen_profile(QWidget *parent = nullptr, int idClient = 0);
    ~screen_profile();
    std::vector<Vinyl> vinys;
    int idClient;

private slots:
    void on_pb_home_profile_clicked();

    void on_pb_cart_profile_clicked();


    void on_btn_Logout_clicked();

private:
    Ui::screen_profile *ui;
};

#endif // SCREEN_PROFILE_H
