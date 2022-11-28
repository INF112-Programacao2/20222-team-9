#include "cart.h"

Cart::Cart(int cart_id, std::vector<Vinyl> vinylList, Client client) :
    cart_id(cart_id), vinylList(vinylList), client(client){};

int Cart::getCartId()
{
    return this->cart_id;
}

void Cart::setCartId(int cart_id)
{
    this->cart_id = cart_id;
}

std::vector<Vinyl> Cart::getVinylList()
{
    return this->vinylList;
}

void Cart::setVinylList(std::vector<Vinyl> vinylList)
{
    this->vinylList = vinylList;
}

Client Cart::getClient()
{
    return this->client;
}

void Cart::setClient(Client client)
{
    this->client = client;
}
