#include "cart.h"

Cart::Cart(int id, vector <Vinyl> vinylList, Client client)
{
    this->id = id;
    this->vinylList = vinylList;
    this->client = client;
}

int Cart::getId()
{
    return id;
}

void Cart::setId(int id)
{
    this->id = id;
}

vector <Vinyl> Cart::getVinylList()
{
    return vinylList;
}

void Cart::setVinylList(vector <Vinyl> vinylList)
{
    this->vinylList = vinylList;
}

Client Cart::getClient()
{
    return client;
}

void Cart::setClient(Client client)
{
    this->client = client;
}