#include "client.h"

Client::Client(int id, QString cpf, QString name, QString email, QString password) :
    id(id), cpf(cpf), name(name), email(email), password(password){};

int Client::getId()
{
    return this->id;
}

void Client::setId(int id)
{
    this->id = id;
}

QString Client::getCpf()
{
    return this->cpf;
}

void Client::setCpf(QString cpf)
{
    this->cpf = cpf;
}

QString Client::getName()
{
    return this->name;
}

void Client::setName(QString name)
{
    this->name = name;
}

QString Client::getEmail()
{
    return this->email;
}

void Client::setEmail(QString email)
{
    this->email = email;
}

QString Client::getPassword()
{
    return this->password;
}

void Client::setPassword(QString password)
{
    this->password = password;
}

/*depende da implementação da classe Compra
void calculatePurchase(Purchase purchase) {}*/
