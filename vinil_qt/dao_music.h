#ifndef DAOMUSIC_H
#define DAOMUSIC_H

#include "dao_connection_factory.h"
#include "music.h"

class DAOMusic
{
private:
    DAOConnectionFactory connection_factory;
    QSqlDatabase database_connection;
public:
    DAOMusic();
    ~DAOMusic();

    bool createMusic(Music music);
    bool readMusic(int id);
    bool updateMusic(Music music);
    bool deleteMusic(int id);
};

#endif // DAOMUSIC_H
