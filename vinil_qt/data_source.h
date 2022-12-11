#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <QtSql/QSqlDatabase>

#include "QSqlQuery"
#include <QSqlRecord>
#include <QSqlError>

class DataSource
{
private:
    QSqlDatabase database;
    QString host, userName, password, databaseName;

public:
    DataSource();
    ~DataSource();

    QSqlDatabase createConnection() noexcept(false);
    QSqlDatabase getConnection();
};

#endif // DATASOURCE_H
