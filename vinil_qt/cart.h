#ifndef CART_H
#define CART_H

#include "client.h"
#include "vinyl.h"

class Cart
{
    private:
        int cart_id;
        std::vector<Vinyl> vinylList;
        Client client;

    public:
        Cart(int cart_id, std::vector<Vinyl> vinylList, Client client);

        int getCartId();
        void setCartId(int cart_id);
        std::vector<Vinyl> getVinylList();
        void setVinylList(std::vector<Vinyl> vinylList);
        Client getClient();
        void setClient(Client client);
};
#endif // CART_H
