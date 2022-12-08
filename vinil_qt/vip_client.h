#ifndef VIPCLIENT_H
#define VIPCLIENT_H

#include "client.h"

class VIPClient : public Client
{
public:
    VIPClient(int id, QString cpf, QString name, QString email, QString password, int vip, int rank);
    void calculateRank() override;
};

#endif // VIPCLIENT_H
