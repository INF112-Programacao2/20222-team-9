#ifndef VIPPURCHASE_H
#define VIPPURCHASE_H

#include "purchase.h"

class VIPPurchase : public Purchase
{
public:
    VIPPurchase(Cart cart);
    void calculateDiscount() override;
};

#endif // VIPPURCHASE_H
