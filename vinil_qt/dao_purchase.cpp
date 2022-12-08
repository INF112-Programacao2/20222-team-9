#include "dao_purchase.h"

DAOPurchase::DAOPurchase()
{
    database_connection = data_source.getConnection();
}

DAOPurchase::~DAOPurchase() {}

bool DAOPurchase::createPurchase(Purchase purchase)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO `vinyl_shop`.`purchase` (`id`, `client_id`, `cart_id`, `total`) VALUES ('"
                    + QString::number(purchase.getId()) + "', '" + QString::number(purchase.getCart().getClient().getId()) + "', '"
                    + QString::number(purchase.getCart().getId()) + "', '" + QString::number(purchase.getCart().getTotal()) + "');";

      query.prepare(sql);

      if(query.exec())
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
    }
    else
    {
      qDebug("Connection failed! - INSERT vinyl_shop.purchase");
      return 0;
    }
}

Purchase DAOPurchase::readPurchase(int id)
{
    DAOCart dao_cart;
    Cart cart;
    Purchase purchase;

    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "SELECT * FROM `vinyl_shop`.`purchase` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Selected from vinyl_shop.purchase!");

          QSqlRecord record = query.record();
          int columns = record.count();

          QString result;

          for(int i = 0; i < columns; i++)
            result += record.fieldName(i) + ((i < columns - 1)? "\\" : "");

          qDebug() << result;

          std::vector<QString> res;

          if(!query.next())
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

              purchase = Purchase(id, cart, discount);
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
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "DELETE FROM `vinyl_shop`.`purchase` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
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
