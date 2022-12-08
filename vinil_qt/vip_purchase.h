#ifndef VIPPURCHASE_H
#define VIPPURCHASE_H

#include "purchase.h"

class VIPPurchase : public Purchase
{
public:
    VIPPurchase(int id, Cart cart, double discount);
    void calculetaDiscount() override;
};

#endif // VIPPURCHASE_H
