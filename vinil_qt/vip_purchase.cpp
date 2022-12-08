#include "vip_purchase.h"

VIPPurchase::VIPPurchase(int id, Cart cart, double discount) :
    Purchase(id, cart, discount){};

void VIPPurchase::calculetaDiscount()
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


