#ifndef CLIENT_H
#define CLIENT_H

#include "qsqldatabase.h"
//#include "purchase.h"

class Client
{
private:
    int id;
    QString cpf, name, email, password;
    int vip;

public:
    Client(int id, QString cpf, QString name, QString email, QString password, int vip);

    int getId();
    void setId(int id);
    QString getCpf();
    void setCpf(QString cpf);
    QString getName();
    void setName(QString name);
    QString getEmail();
    void setEmail(QString email);
    QString getPassword();
    void setPassword(QString password);
    int getVip();
    void setVip(int vip);

    //virtual void calculateClientPurchase(Purchase purchase);
};

#endif // CLIENT_H
