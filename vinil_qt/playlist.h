#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "music.h"
#include <vector>

class Playlist
{
private:
    int id;
    std::vector<Music> playlist;

public:
    Playlist(int id, std::vector<Music> playlist);

    int getId();
    void setId(int id);
    std::vector<Music> getPlaylist();
    void setPlaylist(std::vector<Music> playlist);
};

#endif // PLAYLIST_H
