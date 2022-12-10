#include "data_source.h"

DataSource::DataSource()
{
    this->database = QSqlDatabase::database("planning");
}

DataSource::~DataSource() {}

QSqlDatabase DataSource::getConnection()
{
    return this->database;
}

QSqlDatabase DataSource::createConnection()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL", "planning");
    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("root");
    database.setDatabaseName("vinyl_shop");
    this->database = database;
    return database;
}
