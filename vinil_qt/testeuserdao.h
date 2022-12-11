#ifndef TESTEUSERDAO_H
#define TESTEUSERDAO_H

#include "qsqldatabase.h"

class TesteUserDAO
{
public:

private:
    QSqlDatabase conn;
    QString erro;
    char menssagem[255];

public:
    TesteUserDAO();
    ~TesteUserDAO();

    bool loginUsuario(QString cpf, QString senha);
    bool inserirUsuario(QString cpf, QString nome, QString senha, QString email, int vip, int rank );
    QString getErro();
};

#endif // TESTEUSERDAO_H
