#ifndef DAOPURCHASE_H
#define DAOPURCHASE_H

#include "data_source.h"
#include "dao_cart.h"
#include "purchase.h"

class DAOPurchase
{
    private:
        DataSource data_source;
        QSqlDatabase database_connection;

    public:
        DAOPurchase(QSqlDatabase database_connection);
        ~DAOPurchase();

        bool createPurchase(Purchase purchase);
        Purchase readPurchase(int id);
        bool deletePurchase(int id);
};

#endif // DAOPURCHASE_H
