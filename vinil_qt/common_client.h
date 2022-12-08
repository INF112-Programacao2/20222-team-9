#ifndef COMMONCLIENT_H
#define COMMONCLIENT_H

#include "client.h"

class CommonClient : public Client
{
public:
    CommonClient(int id, QString cpf, QString name, QString email, QString password, int vip, int rank);
    void calculateRank() override;
};

#endif // COMMONCLIENT_H
