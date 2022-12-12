#include "vip_purchase.h"
#include <iostream>
VIPPurchase::VIPPurchase(Cart cart) :
    Purchase(cart){};

void VIPPurchase::calculateDiscount(double d)
{
    std::cout << "ddd" << d << std::endl;

    switch (Purchase::getCart().getClient().getRank())
    {
        case 0:
            d -= (d * 5 / 100.0);
            break;
        case 1:
            d -= (d * 10 / 100.0);
            break;
        case 2:
            d -= (d * 15 / 100.0);
            break;
        default:
            break;
    }

    Purchase::setDiscount(d);
}


