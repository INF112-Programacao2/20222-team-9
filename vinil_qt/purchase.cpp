#include "purchase.h"

Purchase::Purchase(int id, Client client, Cart cart, double total)
{
    this->id = id;
    this->client = client;
    this->cart = cart;
    this->total = total;
}

int Purchase::getId()
{
    return id;
}

void Purchase::setId(int id)
{
    this->id = id;
}

Client Purchase::getClient()
{
    return client;
}

void Purchase::setClient(Client client)
{
    this->client = client;
}

Cart Purchase::getCart()
{
    return cart;
}

void Purchase::setCart(Cart cart)
{
    this->cart = cart;
}

double Purchase::getTotal()
{
    return total;
}

void Purchase::setTotal(double total)
{
    this->total = total;
}