#include "vip_client.h"
#include "dao_vinyl.h"
#include "vinyl.h"

VIPClient::VIPClient(int id, QString cpf, QString name, QString email, QString password, int vip, int rank) :
    Client(id, cpf, name, email, password, vip, rank){};

void VIPClient::calculateRank()
{
    DataSource ds;
    DAOVinyl dao_vinyl(ds.getConnection());
    std::vector<Vinyl> vinyl_collection = dao_vinyl.readVinylCollection(Client::getId());

    int w = 0;
    for(unsigned int i = 0; i < vinyl_collection.size(); i++)
        switch(vinyl_collection[i].getRarity())
        {
            case 0:
                w++;
                break;
            case 1:
                w += 3;
                break;
            case 2:
                w += 9;
                break;
            default:
                break;
        }

    switch(w)
    {
        case 9:
            Client::setRank(0);
            break;
        case 19:
            Client::setRank(1);
            break;
        case 31:
            Client::setRank(2);
            break;
        default:
            break;
    }
}
