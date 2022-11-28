#ifndef PURCHASE_H
#define PURCHASE_H

#include "client.h"
#include "cart.h"
#include "qsqldatabase.h"

class Purchase
{

private:

    int id;
    Client client;
    Cart cart;
    double total;

public:
    Purchase(int id, Client client, Cart cart, double total);

    int getId();
    void setId(int id);
    Client getClient();
    void setClient(Client client);
    Cart getCart();
    void setCart(Cart cart);
    double getTotal();
    void setTotal(double total);
};

#endif // PURCHASE_H
