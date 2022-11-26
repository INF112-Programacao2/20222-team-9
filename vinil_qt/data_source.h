#ifndef DATA_SOURCE_H
#define DATA_SOURCE_H

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

    QSqlDatabase getConnection();
};

#endif // DATA_SOURCE_H
