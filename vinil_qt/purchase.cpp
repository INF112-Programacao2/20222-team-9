#include "purchase.h"

Purchase::Purchase() {}

Purchase::Purchase(int id, Cart cart, double discount) :
    id(id), cart(cart), discount(discount){};

int Purchase::getId()
{
    return this->id;
}

void Purchase::setId(int id)
{
    this->id = id;
}

Cart Purchase::getCart()
{
    return this->cart;
}

void Purchase::setCart(Cart cart)
{
    this->cart = cart;
}

double Purchase::getDiscount()
{
    return this->discount;
}

void Purchase::setDiscount(double discount)
{
    this->discount = discount;
}

void Purchase::calculateDiscount() {}

void Purchase::apllyDiscount()
{
    Purchase::getCart().setTotal(Purchase::getCart().getTotal() - Purchase::getDiscount());
}
