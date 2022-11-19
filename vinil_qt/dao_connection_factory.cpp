#include "dao_connection_factory.h"

#include "QSqlDatabase"
#include "QMessageBox"

DAOConnectionFactory::DAOConnectionFactory() {}

DAOConnectionFactory::~DAOConnectionFactory() {}

QSqlDatabase DAOConnectionFactory::getConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", "planning");

    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("bd_vinil");

    return db;
}
