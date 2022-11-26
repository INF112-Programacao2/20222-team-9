#include "dao_music.h"

DAOMusic::DAOMusic()
{
    database_connection = data_source.getConnection();
}

DAOMusic::~DAOMusic() {}

bool DAOMusic::createMusic(Music music)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`music` (`name`, `duration`) VALUES ('"
                      + music.getName() + "', '" + QString::number(music.getDuration()) + "');";

        query.prepare(sql);

        if(query.exec())
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

bool DAOMusic::readMusic(int id)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`music` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if(query.exec())
        {
            qDebug("Selected from vinyl_shop.music!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            if(!query.next())
            {
                qDebug("'query.next()' is false! - SELECT vinyl_shop.music");
                qDebug() << query.lastError();
                return 0;
            }
            else
            {
                result = "";

                for (int i = 0; i < columns; i++)
                    result += query.value(i).toString() + ((i < columns - 1) ? "\\" : "");

                qDebug() << result;

                return 1;
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.music");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.music");
        return 0;
    }
}

bool DAOMusic::updateMusic(Music music)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "UPDATE `vinyl_shop`.`music` SET `name` = '"
                      + music.getName() + "', `duration` = '" + QString::number(music.getDuration())
                      + "' WHERE `id` = '" + QString::number(music.getId()) + "';";

        query.prepare(sql);

        if(query.exec())
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
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql =  "DELETE FROM `vinyl_shop`.`music` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if(query.exec())
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
