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
    DAOClient(QSqlDatabase database_connection);
    ~DAOClient();

    bool createClient(Client client);
    Client readClient(int id);
    bool updateClient(Client client);
    bool deleteClient(int id);

    Client loginClient(QString cpf, QString senha);
};

#endif // DAOCLIENT_H
