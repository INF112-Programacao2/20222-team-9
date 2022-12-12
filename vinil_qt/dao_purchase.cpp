#include "dao_purchase.h"
#include <QDebug>
#include <QVariant>

DAOPurchase::DAOPurchase(QSqlDatabase database_connection)
{
    this->database_connection = database_connection;
    if (!database_connection.isOpen())
    {
        database_connection.open();
    }
}

DAOPurchase::~DAOPurchase() {}

bool DAOPurchase::createPurchase(Purchase purchase)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO `vinyl_shop`.`purchase` (`cart_id`) VALUES ('" + QString::number(purchase.getCart().getId()) + "');";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Inserted in vinyl_shop.purchase!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - INSERT vinyl_shop.purchase");
            qDebug() << query.lastError();
            return 0;
        }

        DAOVinyl dao_vinyl(database_connection);

        dao_vinyl.updateVinylStatus(purchase.getCart().getId());

        return 1;
    }
    else
    {
        qDebug("Connection failed! - INSERT vinyl_shop.purchase");
        return 0;
    }
}

Purchase DAOPurchase::readPurchase(int id)
{
    DataSource ds;
    DAOCart dao_cart(ds.getConnection());
    Cart cart;
    Purchase purchase;

    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM `vinyl_shop`.`purchase` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Selected from vinyl_shop.purchase!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            std::vector<QString> res;

            if (!query.next())
            {
                qDebug("'query.next()' is false! - SELECT vinyl_shop.purchase");
                qDebug() << query.lastError();
            }
            else
            {
                for (int i = 0; i < columns; i++)
                    res.push_back(query.value(i).toString());

                int id = res[0].toInt();
                cart = dao_cart.readCart(res[1].toInt());
                double discount = res[2].toDouble();

                purchase = Purchase(id, cart, 0);
            }
        }
        else
        {
            qDebug("'query.exec()' failed! - SELECT vinyl_shop.purchase");
            qDebug() << query.lastError();
        }
    }
    else
    {
        qDebug("Connection failed! - SELECT vinyl_shop.purchase");
    }

    return purchase;
}

bool DAOPurchase::deletePurchase(int id)
{
    if (database_connection.isOpen())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "DELETE FROM `vinyl_shop`.`purchase` WHERE `id` = '" + QString::number(id) + "';";

        query.prepare(sql);

        if (query.exec())
        {
            qDebug("Deleted from vinyl_shop.purchase!");
            return 1;
        }
        else
        {
            qDebug("'query.exec()' failed! - DELETE vinyl_shop.purchase");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - DELETE vinyl_shop.purchase");
        return 0;
    }
}
