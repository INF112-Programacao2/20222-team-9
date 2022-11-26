#ifndef DAO_MUSIC_H
#define DAO_MUSIC_H

#include "data_source.h"
#include "music.h"

class DAOMusic
{
private:
    DataSource data_source;
    QSqlDatabase database_connection;

public:
    DAOMusic();
    ~DAOMusic();

    bool createMusic(Music music);
    bool readMusic(int id);
    bool updateMusic(Music music);
    bool deleteMusic(int id);
};

#endif // DAO_MUSIC_H
