#include "dao_vinyl.h"
#include "connection_exception.h"
#include <iostream>
DAOVinyl::DAOVinyl(QSqlDatabase database_connection)
{
    this->database_connection = database_connection;

    if (!database_connection.isOpen())
        database_connection.open();
}

DAOVinyl::~DAOVinyl() {}

bool DAOVinyl::createVinyl(Vinyl vinyl)
{
    DataSource dao;
    try{

    QSqlDatabase conn = dao.createConnection();
    }catch(ConnectionException e){
        std::cerr<<e.what()<<std::endl;
    }
    if (database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`vinyl` (`name`, `genre`, `composer`, `featuring`, `release_year`, `rarity`, `price`, `image_url`, `status`) VALUES ('" +
                vinyl.getName() + "', '" + vinyl.getGenre() + "', '" +
                vinyl.getComposer() + "', '" + vinyl.getFeaturing() + "', '" +
                QString::number(vinyl.getReleaseYear()) + "', '" + QString::number(vinyl.getRarity()) + "', '" +
                QString::number(vinyl.getPrice()) + "', '" + vinyl.getImageUrl() + "', '" + QString::number(vinyl.getStatus()) + "');";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Inserted in vinyl_shop.vinyl!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - INSERT vinyl_shop.vinyl");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - INSERT vinyl_shop.vinyl");
        return 0;
    }
}

bool DAOVinyl::createVinylCollection(int client_id, int vinyl_id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`vinyl_collection`(`client_id`, `vinyl_id`) VALUES ('"
                    + QString::number(client_id) + "', '" + QString::number(vinyl_id) + "');";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Inserted in vinyl_shop.vinyl_collection!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - INSERT vinyl_shop.vinyl_collection");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - INSERT vinyl_shop.vinyl_collection");
        return 0;
    }
}

Vinyl DAOVinyl::readVinyl(int id)
{
    DAOMusic dao_music(database_connection);
    std::vector<Music> playlist;
    Vinyl vinyl;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`vinyl` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.vinyl!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            std::vector<QString> res;

            if (!query.next())
            {
                qDebug("'query.next()' is false - SELECT vinyl_shop.vinyl");
                qDebug() << query.lastError();
            }
            else
            {
                for (int i = 0; i < columns; i++)
                    res.push_back(query.value(i).toString());

                int id = res[0].toInt();
                QString name = res[1];
                QString genre = res[2];
                QString composer = res[3];
                QString featuring = res[4];
                int releaseYear = res[5].toInt();
                int rarity = res[6].toInt();
                double price = res[7].toDouble();
                QString image_url = res[8];
                bool status = res[9].toInt();

                playlist = dao_music.readPlaylist(id);

                vinyl = Vinyl(id, name, playlist, genre, composer, featuring, releaseYear, rarity, price, image_url, status);
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.vinyl");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.vinyl");
    }

    return vinyl;
}

std::vector<Vinyl> DAOVinyl::readVinylsForSale()
{
    DAOMusic dao_music(database_connection);
    std::vector<Music> playlist;
    Vinyl vinyl;
    std::vector<Vinyl> vinyl_list;
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`vinyl` WHERE `status` = '1' ORDER BY id DESC;";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.vinyl!");

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
                QString genre = res[2];
                QString composer = res[3];
                QString featuring = res[4];
                int releaseYear = res[5].toInt();
                int rarity = res[6].toInt();
                double price = res[7].toDouble();
                QString image_url = res[8];
                bool status = res[9].toInt();

                playlist = dao_music.readPlaylist(id);

                vinyl = Vinyl(id, name, playlist, genre, composer, featuring, releaseYear, rarity, price, image_url, status);
                vinyl_list.push_back(vinyl);

                res.clear();
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.vinyl");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("170Connection failed! - SELECT vinyl_shop.vinyl");
    }

    return vinyl_list;
}

std::vector<Vinyl> DAOVinyl::readVinylCollection(int client_id)
{
    DAOMusic dao_music(database_connection);
    std::vector<Music> playlist;
    Vinyl vinyl;
    std::vector<Vinyl> vinyl_list;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT `vinyl`.`id`, `vinyl`.`name`, `vinyl`.`genre`, `vinyl`.`composer`, `vinyl`.`featuring`, "
                "`vinyl`.`release_year`, `vinyl`.`rarity`, `vinyl`.`price`, `vinyl`.`image_url`, `vinyl`.`status` "
                "FROM `vinyl_shop`.`vinyl` "
                "LEFT JOIN `vinyl_shop`.`vinyl_collection` vc ON `vinyl`.`id` = vc.`vinyl_id` "
                "WHERE vc.`client_id` = '" + QString::number(client_id) + "' ORDER BY id DESC;";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.vinyl_collection!");

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
                QString genre = res[2];
                QString composer = res[3];
                QString featuring = res[4];
                int releaseYear = res[5].toInt();
                int rarity = res[6].toInt();
                double price = res[7].toDouble();
                QString image_url = res[8];
                bool status = res[9].toInt();

                playlist = dao_music.readPlaylist(id);

                vinyl = Vinyl(id, name, playlist, genre, composer, featuring, releaseYear, rarity, price, image_url, status);
                vinyl_list.push_back(vinyl);

                res.clear();
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.vinyl_collection");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.vinyl_collection");
    }

    return vinyl_list;
}

bool DAOVinyl::updateVinyl(Vinyl vinyl)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "UPDATE `vinyl_shop`.`vinyl` SET name = '" + vinyl.getName() + "', `genre` = '" + vinyl.getGenre() +
                "', `composer` = '" + vinyl.getComposer() + "', `featuring` = '" + vinyl.getFeaturing() +
                "', `release_year` = '" + QString::number(vinyl.getReleaseYear()) + "', `rarity` = '" + QString::number(vinyl.getRarity()) +
                "', `price` = '" + QString::number(vinyl.getPrice()) + "', `image_url` = '" + vinyl.getImageUrl() +
                "', `status` = '" + (vinyl.getStatus() ? "1" : "0") + "' WHERE `id` = '" + QString::number(vinyl.getId()) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Updated in vinyl_shop.vinyl!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - UPDATE vinyl_shop.vinyl");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - UPDATE vinyl_shop.vinyl");
        return 0;
    }
}

bool DAOVinyl::updateVinylStatus(int cart_id)
{
    DataSource ds;
    DAOCart dao_cart(ds.getConnection());

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql;

        std::vector<Vinyl> vinyl_list = dao_cart.readCartItems(cart_id);

        for (unsigned int i = 0; i < vinyl_list.size(); i++)
        {
            sql = "UPDATE vinyl_shop.vinyl SET status = 0 WHERE id = '" +
                  QString::number(vinyl_list[i].getId()) + "';";

            query.prepare(sql);

            if (query.exec())
            {
                qDebug("Update from vinyl_shop.vinyl!");
                return 1;
            }
            else
            {
                qDebug("'query.exec()' failed! - UPDATE vinyl_shop.vinyl");
                qDebug() << query.lastError();
                return 0;
            }
        }

        return 1;
    }
    else
    {
        qDebug("Connection failed! - UPDATE vinyl_shop.vinyl");
        return 0;
    }
}

bool DAOVinyl::deleteVinyl(int id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "DELETE FROM `vinyl_shop`.`vinyl` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Deleted from vinyl_shop.vinyl!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - DELETE vinyl_shop.vinyl");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - DELETE vinyl_shop.vinyl");
        return 0;
    }
}
