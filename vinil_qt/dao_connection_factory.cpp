#include "dao_connection_factory.h"

#include "QSqlDatabase"
#include "QMessageBox"

DAOConnectionFactory::DAOConnectionFactory() {}

DAOConnectionFactory::~DAOConnectionFactory() {}

QSqlDatabase DAOConnectionFactory::getConnection()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL", "planning");

    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("root");
    database.setDatabaseName("vinyl_shop");

    return database;
}
