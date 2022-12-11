#ifndef DAO_NEWUSER_H
#define DAO_NEWUSER_H

#include "qsqldatabase.h"

class newUserDAO
{
public:

private:
    QSqlDatabase conn;
    QString erro;
    char menssagem[255];

public:
    newUserDAO();
    ~newUserDAO();

    bool loginUsuario(QString cpf, QString senha);
    bool inserirUsuario(QString cpf, QString nome, QString senha);
    QString getErro();
};

#endif // DAO_NEWUSER_H
