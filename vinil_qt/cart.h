#ifndef CART_H
#define CART_H

#include "client.h"
#include "vinyl.h"

class Cart
{
private:
    int id;
    Client client;
    std::vector<Vinyl> vinylList;
    double total;

public:
    Cart();
    Cart(int id, Client client, std::vector<Vinyl> vinylList, double total);

    int getId();
    void setId(int id);
    Client getClient();
    void setClient(Client client);
    std::vector<Vinyl> getVinylList();
    void setVinylList(std::vector<Vinyl> vinylList);
    double getTotal();
    void setTotal(double total);
};
#endif // CART_H
