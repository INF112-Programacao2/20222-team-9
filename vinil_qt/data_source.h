#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <QtSql/QSqlDatabase>

#include "QSqlQuery"
#include "qsqlrecord.h"
#include "qsqlerror.h"

class DataSource
{
private:
    QSqlDatabase database;
    QString host, userName, password, databaseName;

public:
    DataSource();
    ~DataSource();

    QSqlDatabase createConnection();
    QSqlDatabase getConnection();
};

#endif // DATASOURCE_H
