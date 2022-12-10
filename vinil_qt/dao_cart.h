#ifndef DAOCART_H
#define DAOCART_H

#include "data_source.h"
#include "dao_client.h"
#include "dao_vinyl.h"
#include "cart.h"

class DAOCart
{
private:
    DataSource data_source;
    QSqlDatabase database_connection;

public:
    DAOCart(QSqlDatabase database_connection);
    ~DAOCart();

    Cart createCart(Client client);
    bool insertCartItens(int vinyl_id, int cart_id);
    Cart readCart(int client_id);
    Cart readByCartId(int cart_id);
    bool deleteCart(int client_id);
};

#endif // DAOCLIENT_H
