#ifndef DAOCART_H
#define DAOCART_H

#include "data_source.h"
#include "cart.h"

class DAOCart
{
private:
    DataSource data_source;
    QSqlDatabase database_connection;

public:
    DAOCart();
    ~DAOCart();

    bool createCart(Cart cart);
    bool readCart(int id);
    bool deleteCart(int id);
};

#endif // DAOCLIENT_H
