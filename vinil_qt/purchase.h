#ifndef PURCHASE_H
#define PURCHASE_H

#include "cart.h"

class Purchase
{
private:
    int id;
    Cart cart;
    double discount;

public:
    Purchase();
    Purchase(int id, Cart cart, double discount);

    int getId();
    void setId(int id);
    Cart getCart();
    void setCart(Cart cart);
    double getDiscount();
    void setDiscount(double discount);

    virtual void calculetaDiscount();
    void apllyDiscount();
};

#endif // PURCHASE_H
