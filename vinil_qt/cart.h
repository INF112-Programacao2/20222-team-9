#ifndef CART_H
#define CART_H

#include "qsqldatabase.h"
#include "client.h"
#include <vector>

class Cart
{
    private:

        int id;
        vector <Vinyl> vinylList;
        Client client;

    public:

        Cart(int id, vector <Vinyl> vinylList, Client client);

        int getId();
        void setId(int id);
        vector <Vinyl> getVinylList();
        void setVinylList(vector <Vinyl> vinylList);
        Client getClient();
        void setClient(Client client);
        
};
#endif // CART_H