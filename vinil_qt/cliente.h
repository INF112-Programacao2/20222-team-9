#ifndef CLIENTE_H
#define CLIENTE_H

#include "qsqldatabase.h"
#include "Compra.h"
#include <string>

class Cliente
{
private:
    int id;
    QString cpf, nome, email, senha;

public:
    Cliente(int id, QString cpf, QString nome, QString email, QString senha);

    //futuramente descartar os que não utilizarmos
    int getId();
    void setId(int id);
    QString getCpf();
    void setCpf(QString cpf);
    QString getNome();
    void setNome(QString nome);
    QString getEmail();
    void setEmail(QString email);
    QString getSenha();
    void setSenha(QString senha);

    void calculaCompra(Compra compra);
};

#endif // CLIENTE_H
