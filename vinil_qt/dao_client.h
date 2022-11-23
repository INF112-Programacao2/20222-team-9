#ifndef DAO_CLIENT_H
#define DAO_CLIENT_H

#include "dao_connection_factory.h"
#include "client.h"

class DAOClient
{
private:
    QSqlDatabase database_connection;
    DAOConnectionFactory connection_factory;

public:
    DAOClient();
    ~DAOClient();

    bool createClient(Client client);
    bool readClient(int id);
    bool updateClient(Client client);
    bool deleteClient(int id);
};

#endif // DAO_CLIENT_H
