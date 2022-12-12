#include "dao_music.h"
#include <iostream>

DAOMusic::DAOMusic(QSqlDatabase database_connection)
{
    this->database_connection = database_connection;

    if (!database_connection.isOpen())
        database_connection.open();
}

DAOMusic::~DAOMusic() {}

bool DAOMusic::createMusic(Music music)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`music` (`name`, `duration`) VALUES ('" + music.getName() + "', '" +
                QString::number(music.getDuration()) + "');";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Inserted in vinyl_shop.music!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - INSERT vinyl_shop.music");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - INSERT vinyl_shop.music!");
        return 0;
    }
}

Music DAOMusic::readMusic(int id)
{
    Music music;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`music` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.music!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            std::vector<QString> res;

            if (!query.next())
            {
                qDebug("'query.next()' is false! - SELECT vinyl_shop.music");
                qDebug() << query.lastError();
            }
            else
            {
                for (int i = 0; i < columns; i++)
                    res.push_back(query.value(i).toString());

                int id = res[0].toInt();
                QString name = res[1];
                double duration = res[2].toDouble();

                music = Music(id, name, duration);
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.music");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.music");
    }

    return music;
}

std::vector<Music> DAOMusic::readPlaylist(int vinyl_id)
{
    Music music;
    std::vector<Music> playlist;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT `music`.`id`, `music`.`name`, `music`.`id` FROM `vinyl_shop`.`music` "
                      "LEFT JOIN `vinyl_shop`.`playlist` p ON `music`.`id` = p.`music_id` "
                      "LEFT JOIN `vinyl_shop`.`vinyl` v ON v.`id` =  p.`vinyl_id` "
                      "WHERE v.`id` = '" +
                      QString::number(vinyl_id) + "' ORDER BY id DESC;";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.music!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            std::vector<QString> res;

            while (query.next())
            {
                for (int i = 0; i < columns; i++)
                    res.push_back(query.value(i).toString());

                int id = res[0].toInt();
                QString name = res[1];
                double duration = res[2].toDouble();

                music = Music(id, name, duration);
                playlist.push_back(music);

                res.clear();
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.music");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.music");
    }

    return playlist;
}

bool DAOMusic::updateMusic(Music music)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "UPDATE `vinyl_shop`.`music` SET `name` = '" + music.getName() + "', `duration` = '" +
                QString::number(music.getDuration()) + "' WHERE `id` = '" + QString::number(music.getId()) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Updated in vinyl_shop.music!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' - UPDATE vinyl_shop.music");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Conneciton failed! - UPDATE vinyl_shop.music");
        return 0;
    }
}

bool DAOMusic::deleteMusic(int id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "DELETE FROM `vinyl_shop`.`music` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Deleted from vinyl_shop.music!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - DELETE vinyl_shop.music");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Conneciton failed! - DELETE vinyl_shop.music");
        return 0;
    }
}
