#ifndef CART_H
#define CART_H

#include "client.h"
#include "vinyl.h"

class Cart
{
    private:
        int id;
        std::vector<Vinyl> vinylList;
        Client client;

    public:
        Cart(int id, std::vector<Vinyl> vinylList, Client client);

        int getId();
        void setId(int id);
        std::vector<Vinyl> getVinylList();
        void setVinylList(std::vector<Vinyl> vinylList);
        Client getClient();
        void setClient(Client client);
};
#endif // CART_H
