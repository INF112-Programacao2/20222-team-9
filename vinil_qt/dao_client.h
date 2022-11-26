#ifndef DAOCLIENT_H
#define DAOCLIENT_H

#include "data_source.h"
#include "client.h"

class DAOClient
{
private:
    DataSource data_source;
    QSqlDatabase database_connection;

public:
    DAOClient();
    ~DAOClient();

    bool createClient(Client client);
    bool readClient(int id);
    bool updateClient(Client client);
    bool deleteClient(int id);
};

#endif // DAOCLIENT_H
