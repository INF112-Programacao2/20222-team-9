#include "playlist.h"

Playlist::Playlist(int id, std::vector<Music> playlist) :
    id(id), playlist(playlist){};

int Playlist::getId()
{
    return this->id;
}

void Playlist::setId(int id)
{
    this->id = id;
}

std::vector<Music> Playlist::getPlaylist()
{
    return this->playlist;
}

void Playlist::setPlaylist(std::vector<Music> playlist)
{
    this->playlist = playlist;
}
