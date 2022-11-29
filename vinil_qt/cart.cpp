#include "cart.h"

Cart::Cart(int id, std::vector<Vinyl> vinylList, Client client) :
    id(id), vinylList(vinylList), client(client){};

int Cart::getId()
{
    return this->id;
}

void Cart::setId(int id)
{
    this->id = id;
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
