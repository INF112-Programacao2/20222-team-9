#include "data_source.h"

DataSource::DataSource() {}

DataSource::~DataSource() {}

QSqlDatabase DataSource::getConnection()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL", "planning");

    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("root");
    database.setDatabaseName("vinyl_shop");

    return database;
}
