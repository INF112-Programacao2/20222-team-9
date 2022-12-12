#ifndef DAOVINYL_H
#define DAOVINYL_H

#include "data_source.h"
#include "dao_music.h"
#include "dao_cart.h"
#include "vinyl.h"

class DAOVinyl
{
private:
    DataSource data_source;
    QSqlDatabase database_connection;

public:
    DAOVinyl(QSqlDatabase database_connection);
    ~DAOVinyl();

    bool createVinyl(Vinyl vinyl);
    bool createVinylCollection(int client_id, int vinyl_id);
    Vinyl readVinyl(int id);
    std::vector<Vinyl> readVinylsForSale();
    std::vector<Vinyl> readVinylCollection(int client_id);
    bool updateVinyl(Vinyl vinyl);
    bool updateVinylStatus(int cart_id);
    bool deleteVinyl(int id);
};

#endif // DAOVINYL_H
