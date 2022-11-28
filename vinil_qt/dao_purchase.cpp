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
      QString sql = "INSERT INTO `vinyl_shop`.`purchase` (`id`, `client`, `cart`, `total`) VALUES ('"
                    + purchase.getId() + "', '" + purchase.getClient() + "', '"
                    + purchase.getCart() + "', '" + purchase.getTotal() + "');";

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

bool DAOPurchase::readPurchase(int id)
{
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

          return 1;
      }
      else
      {
          qDebug("'query.exec()' failed! - SELECT vinyl_shop.purchase");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - SELECT vinyl_shop.purchase");
      return 0;
    }
}

bool DAOPurchase::updatePurchase(Purchase purchase)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "UPDATE `vinyl_shop`.`purchase` SET `client` = '" + purchase.getClient() + "', `cart` = '"
                    + purchase.getCart() + "', `total` = '" + purchase.getTotal() + "' WHERE `id` = '" + purchase.getId() + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Updated vinyl_shop.purchase!");
          return 1;
      }
      else
      {
          qDebug("'query.exec()' failed! - UPDATE vinyl_shop.purchase");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - UPDATE vinyl_shop.purchase");
      return 0;
    }
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