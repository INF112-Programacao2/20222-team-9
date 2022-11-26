#ifndef VINYL_H
#define VINYL_H

#include <QString>
#include <vector>
#include "music.h"

class Vinyl
{
private:
    int id;
    QString name;
    std::vector<Music> playlist;
    QString genre;
    QString composer;
    QString featuring;
    int releaseYear;
    int rarity;
    double price;

public:
    Vinyl(int id, QString name, std::vector<Music> playlist, QString genre, QString composer, QString featuring, int releaseYear, int rarity, double price);

    int getId();
    void setId(int id);
    QString getName();
    void setName(QString name);
    std::vector<Music> getPlaylist();
    void setPlaylist(std::vector<Music> playlist);
    QString getGenre();
    void setGenre(QString genre);
    QString getComposer();
    void setComposer(QString composer);
    QString getFeaturing();
    void setFeaturing(QString featuring);
    int getReleaseYear();
    void setReleaseYear(int releaseYear);
    int getRarity();
    void setRarity(int rarity);
    double getPrice();
    void setPrice(double price);
};

#endif // VINYL_H
