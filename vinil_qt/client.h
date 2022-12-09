#ifndef CLIENT_H
#define CLIENT_H

#include "qsqldatabase.h"

class Client
{
private:
    int id = 0;
    QString cpf, name, email, password;
    int vip, rank;

public:
    Client();
    Client(int id, QString cpf, QString name, QString email, QString password, int vip, int rank);

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
    int getRank();
    void setRank(int rank);

    virtual void calculateRank();
};

#endif // CLIENT_H
