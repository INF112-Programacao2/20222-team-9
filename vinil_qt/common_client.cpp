#include "common_client.h"

CommonClient::CommonClient(int id, QString cpf, QString name, QString email, QString password, int vip, int rank) :
    Client(id, cpf, name, email, password, vip, rank){};

void CommonClient::calculateRank()
{
    Client::setRank(-1);
}
