#ifndef SCREEN_CART_H
#define SCREEN_CART_H

#include "cart.h"
#include "vinyl.h"
#include "vip_purchase.h"
#include <QDialog>

namespace Ui {
class screen_cart;
}

class screen_cart : public QDialog
{
    Q_OBJECT

public:
    screen_cart(QWidget *parent = nullptr, int idClient=0);
    ~screen_cart();
    std::vector<Vinyl> vinys;
    Cart cart;
    int idClient;
    VIPPurchase *vipP;

private slots:
    void on_pb_home_cart_clicked();

    void on_pb_profile_cart_clicked();

    void on_tableWidget_itemSelectionChanged();
    Vinyl getVinyl(int idVinyl);
    double getValorTotal();
    void on_pb_finalizar_clicked();

private:
    Ui::screen_cart *ui;
};

#endif // SCREEN_CART_H
