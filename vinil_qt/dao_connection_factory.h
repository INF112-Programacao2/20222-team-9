#ifndef DAO_CONNECTION_FACTORY_H
#define DAO_CONNECTION_FACTORY_H

#include "QString"
#include "QSqlDatabase"

class DAOConnectionFactory
{
private:
    // Dados utilizados para estabelecer conexão com o banco
    QString host, userName, password, databaseName;
public:
    DAOConnectionFactory();
    ~DAOConnectionFactory();

    QSqlDatabase getConexao();
};

#endif // DAO_CONNECTION_FACTORY_H
