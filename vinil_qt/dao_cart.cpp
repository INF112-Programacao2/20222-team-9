#include "dao_cart.h"

DAOCart::DAOCart(QSqlDatabase database_connection)
{
    this->database_connection = database_connection;

    if (!database_connection.isOpen())
        database_connection.open();
}

DAOCart::~DAOCart() {}

Cart DAOCart::createCart(Client client)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`cart` (`client_id`) VALUES ('" + QString::number(client.getId()) + "');";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Inserted in vinyl_shop.cart!");

            std::vector<Vinyl> vinylList;
            Cart cart(query.lastInsertId().toInt(), client, vinylList, 0);
            return cart;
        }
        else
        {
            qDebug("'query.exec()' failed! - INSERT vinyl_shop.cart");
            qDebug() << query.lastError();
            Cart cart;
            return cart;
        }
    }
    else
    {
        qDebug("Connection failed! - INSERT vinyl_shop.cart");
        Cart cart;
        return cart;
    }
}

bool DAOCart::createCartItems(int idVinyl, int cart_id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`cart_items`(`vinyl_id`, `cart_id`) VALUES ('"
                    + QString::number(idVinyl) + "', '" + QString::number(cart_id) + "');";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Inserted in vinyl_shop.cart!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - INSERT vinyl_shop.cart");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - INSERT vinyl_shop.cart");
        return 0;
    }
}

Cart DAOCart::readCart(int client_id)
{
    DataSource ds;
    DAOClient dao_client(ds.getConnection());
    Client client;
    std::vector<Vinyl> vinylList;
    Cart cart;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`cart` WHERE `client_id` = '" + QString::number(client_id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.cart!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            std::vector<QString> res;

            if (!query.next())
            {
                qDebug("'query.next()' is false! - SELECT vinyl_shop.cart");
                qDebug() << query.lastError();
            }
            else
            {
                for (int i = 0; i < columns; i++)
                    res.push_back(query.value(i).toString());

                int id = res[0].toInt();
                client = dao_client.readClient(res[1].toInt());
                vinylList = readCartItems(id);

                cart = Cart(id, client, vinylList, 0);
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.cart");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.cart");
    }

    return cart;
}

Cart DAOCart::readByCartId(int cart_id)
{
    DataSource ds;
    DAOClient dao_client(ds.getConnection());
    Client client;
    std::vector<Vinyl> vinylList;
    Cart cart;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`cart` WHERE `id` = '" + QString::number(cart_id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.cart!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            std::vector<QString> res;

            if (!query.next())
            {
                qDebug("'query.next()' is false! - SELECT vinyl_shop.cart");
                qDebug() << query.lastError();
            }
            else
            {
                for (int i = 0; i < columns; i++)
                    res.push_back(query.value(i).toString());

                int id = res[0].toInt();
                client = dao_client.readClient(res[1].toInt());
                vinylList = readCartItems(id);

                cart = Cart(id, client, vinylList, 0);
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.cart");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.cart");
    }

    return cart;
}

std::vector<Vinyl> DAOCart::readCartItems(int cart_id)
{
    DAOMusic dao_music(database_connection);
    std::vector<Music> playlist;
    Vinyl vinyl;
    std::vector<Vinyl> vinyl_list;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT `vinyl`.`id`, `vinyl`.`name`, `vinyl`.`genre`, `vinyl`.`composer`, "
                      "`vinyl`.`featuring`, `vinyl`.`release_year`, `vinyl`.`rarity`,"
                      " `vinyl`.`price`, `vinyl`.`image_url`,"
                      "`vinyl`.`status` FROM `vinyl_shop`.`vinyl`"
                      " LEFT JOIN `vinyl_shop`.`cart_items` ci ON "
                      "`vinyl`.`id` = ci.`vinyl_id` LEFT JOIN "
                      "`vinyl_shop`.`cart` c ON c.`id` = ci.cart_id"
                      " WHERE c.`id` = '" +
                      QString::number(cart_id) + "' ORDER BY id DESC;";

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
        qDebug("Connection failed! - SELECT vinyl_shop.vinyl");
    }

    return vinyl_list;
}

bool DAOCart::deleteCart(int client_id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "DELETE FROM `vinyl_shop`.`cart` WHERE `client_id` = '" + QString::number(client_id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Deleted from vinyl_shop.cart!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - DELETE vinyl_shop.cart");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - DELETE vinyl_shop.cart");
        return 0;
    }
}

bool DAOCart::deleteCartItems(int cart_id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "DELETE FROM `vinyl_shop`.`cart_items` WHERE `cart_id` = '" + QString::number(cart_id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Deleted from vinyl_shop.cart_items!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - DELETE vinyl_shop.cart_items");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - DELETE vinyl_shop.cart_items");
        return 0;
    }
}
