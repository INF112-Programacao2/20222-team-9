#ifndef MUSIC_H
#define MUSIC_H

#include <QString>

class Music
{
private:
    int id;
    QString name;
    double duration;
public:
    Music(int id, QString name, double duration);

    int getId();
    void setId(int id);
    QString getName();
    void setName(QString name);
    double getDuration();
    void setDuration(double duration);
};

#endif // MUSIC_H
