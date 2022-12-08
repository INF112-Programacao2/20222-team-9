#include "music.h"

Music::Music() {}

Music::Music(int id, QString name, double duration) :
    id(id), name(name), duration(duration){};

int Music::getId()
{
    return this->id;
}

void Music::setId(int id)
{
    this->id = id;
}

QString Music::getName()
{
    return this->name;
}

void Music::setName(QString name)
{
    this->name = name;
}

double Music::getDuration()
{
    return this->duration;
}

void Music::setDuration(double duration)
{
    this->duration = duration;
}
