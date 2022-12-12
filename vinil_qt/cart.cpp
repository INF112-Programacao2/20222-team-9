#include "cart.h"

Cart::Cart()
{
    this->id = 0;
}

Cart::Cart(int id, Client client, std::vector<Vinyl> vinylList, double total) :
    id(id), client(client), vinylList(vinylList), total(total) {};

Cart::Cart(int id, Client client, std::vector<Vinyl> vinylList, double total, bool ative) :
    id(id), client(client), vinylList(vinylList), total(total), ative(ative) {};
int Cart::getId()
{
    return this->id;
}

void Cart::setId(int id)
{
    this->id = id;
}

Client Cart::getClient()
{
    return this->client;
}

void Cart::setClient(Client client)
{
    this->client = client;
}

std::vector<Vinyl> Cart::getVinylList()
{
    return this->vinylList;
}

void Cart::setVinylList(std::vector<Vinyl> vinylList)
{
    this->vinylList = vinylList;
}

double Cart::getTotal()
{
    return this->total;
}

void Cart::setTotal(double total)
{
    this->total = total;
}


bool Cart::getAtive()
{
    return this->total;
}

void Cart::setAtive(bool ative)
{
    this->ative = ative;
}
