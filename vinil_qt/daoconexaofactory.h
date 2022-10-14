#ifndef DAOCONEXAOFACTORY_H
#define DAOCONEXAOFACTORY_H
#include "QString"
#include "QSqlDatabase"


class DAOConexaoFactory
{
private:
    // Define dados do usuario
    QString host,userName,password,dataBaseName;

public:

    DAOConexaoFactory();
    ~DAOConexaoFactory();

    QSqlDatabase getConexao();
};

#endif // DAOCONEXAOFACTORY_H
