#ifndef DAO_CONNECTION_FACTORY_H
#define DAO_CONNECTION_FACTORY_H

#include <QtSql/QSqlDatabase>

#include "QSqlQuery"
#include "qsqlrecord.h"
#include "qsqlerror.h"

class DAOConnectionFactory
{
private:
    QSqlDatabase database;
    // Dados utilizados para estabelecer conexão com o banco
    QString host, userName, password, databaseName;
public:
    DAOConnectionFactory();
    ~DAOConnectionFactory();

    QSqlDatabase getConnection();
};

#endif // DAO_CONNECTION_FACTORY_H
