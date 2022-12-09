#ifndef SCREEN_HOME_H
#define SCREEN_HOME_H

#include "qnetworkreply.h"
#include "vinyl.h"
#include <QDialog>

namespace Ui {
class screen_home;
}

class screen_home : public QDialog
{
    Q_OBJECT

public:
    screen_home(QWidget *parent = nullptr, int idClient = 0);
    ~screen_home();
    std::vector<Vinyl> vinys;
    void downloadFinished(QNetworkReply *reply);

private slots:
    void on_tableWidget_itemSelectionChanged();



    void on_pb_ver_album_clicked();

    void on_pb_profile_home_clicked();

    void on_pb_cart_home_clicked();

private:
    Ui::screen_home *ui;

    //void TableWidgetDisplay();
    Vinyl getVinyl(int id);
    int idClient;
};

#endif // SCREEN_HOME_H
