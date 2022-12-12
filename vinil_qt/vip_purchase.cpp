#include "vip_purchase.h"

VIPPurchase::VIPPurchase(Cart cart) :
    Purchase(cart){};

void VIPPurchase::calculateDiscount()
{
    double d = Purchase::getCart().getTotal();

    switch (Purchase::getCart().getClient().getRank())
    {
        case 0:
            d -= (Purchase::getCart().getTotal() * 5 / 100.0);
            break;
        case 1:
            d -= (Purchase::getCart().getTotal() * 10 / 100.0);
            break;
        case 2:
            d -= (Purchase::getCart().getTotal() * 15 / 100.0);
            break;
        default:
            break;
    }

    Purchase::setDiscount(d);
}


