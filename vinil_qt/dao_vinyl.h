#ifndef DAOVINYL_H
#define DAOVINYL_H

#include "data_source.h"
#include "vinyl.h"

class DAOVinyl
{
private:
    DataSource data_source;
    QSqlDatabase database_connection;

public:
    DAOVinyl();
    ~DAOVinyl();

    bool createVinyl(Vinyl vinyl);
    bool readVinyl(int id);
    bool updateVinyl(Vinyl vinyl);
    bool deleteVinyl(int id);
};

#endif // DAOVINYL_H
