#include "purchase.h"

Purchase::Purchase(int id, Client client, Cart cart, double total) :
    id(id), client(client), cart(cart), total(total){};

int Purchase::getId()
{
    return this->id;
}

void Purchase::setId(int id)
{
    this->id = id;
}

Client Purchase::getClient()
{
    return this->client;
}

void Purchase::setClient(Client client)
{
    this->client = client;
}

Cart Purchase::getCart()
{
    return this->cart;
}

void Purchase::setCart(Cart cart)
{
    this->cart = cart;
}

double Purchase::getTotal()
{
    return this->total;
}

void Purchase::setTotal(double total)
{
    this->total = total;
}
