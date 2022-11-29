#ifndef DAOPURCHASE_H
#define DAOPURCHASE_H

#include "data_source.h"
#include "purchase.h"

class DAOPurchase
{
    private:
        DataSource data_source;
        QSqlDatabase database_connection;

    public:
        DAOPurchase();
        ~DAOPurchase();

        bool createPurchase(Purchase purchase);
        bool readPurchase(int id);
        bool deletePurchase(int id);
};

#endif // DAOPURCHASE_H
