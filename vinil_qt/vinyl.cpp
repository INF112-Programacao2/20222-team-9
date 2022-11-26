#include "vinyl.h"

Vinyl::Vinyl(int id, QString name, std::vector<Music> playlist, QString genre, QString composer, QString featuring, int releaseYear, int rarity, double price) :
    id(id), name(name), playlist(playlist), genre(genre), composer(composer), featuring(featuring), releaseYear(releaseYear), rarity(rarity), price(price){};

int Vinyl::getId()
{
    return this->id;
}

void Vinyl::setId(int id)
{
    this->id = id;
}

QString Vinyl::getName()
{
    return this->name;
}

void Vinyl::setName(QString name)
{
    this->name = name;
}

std::vector<Music> Vinyl::getPlaylist()
{
    return this->playlist;
}

void Vinyl::setPlaylist(std::vector<Music> playlist)
{
    this->playlist = playlist;
}

QString Vinyl::getGenre()
{
    return this->genre;
}

void Vinyl::setGenre(QString genre)
{
    this->genre = genre;
}

QString Vinyl::getComposer()
{
    return this->composer;
}

void Vinyl::setComposer(QString composer)
{
    this->composer = composer;
}

QString Vinyl::getFeaturing()
{
    return this->featuring;
}

void Vinyl::setFeaturing(QString featuring)
{
    this->featuring = featuring;
}

int Vinyl::getReleaseYear()
{
    return this->releaseYear;
}

void Vinyl::setReleaseYear(int releaseYear)
{
    this->releaseYear = releaseYear;
}

int Vinyl::getRarity()
{
    return this->rarity;
}

void Vinyl::setRarity(int rarity)
{
    this->rarity = rarity;
}

double Vinyl::getPrice()
{
    return this->price;
}

void Vinyl::setPrice(double price)
{
    this->price = price;
}
