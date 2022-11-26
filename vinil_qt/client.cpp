#include "client.h"

Client::Client(int id, QString cpf, QString name, QString email, QString password, int vip) :
    id(id), cpf(cpf), name(name), email(email), password(password), vip(vip){};

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

int Client::getVip()
{
    return this->vip;
}

void Client::setVip(int vip)
{
    this->vip = vip;
}

/*depende da implementação da classe Compra
void calculateClientPurchase(Purchase purchase) {}*/
