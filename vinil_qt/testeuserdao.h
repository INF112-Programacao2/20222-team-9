#ifndef TESTEUSERDAO_H
#define TESTEUSERDAO_H

#include "userteste.h"
#include "string"
class TesteUserDAO
{
public:

private:
    // Define objetos
    QSqlDatabase conn;
    QString erro;
    char menssagem[255];

public:
    TesteUserDAO();
    ~TesteUserDAO();

    // Metodos DAO
    bool loginUsuario(QString cpf, QString senha);
    QString getErro();
};

#endif // TESTEUSERDAO_H
