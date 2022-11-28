#include "dao_cart.h"

DAOCart::DAOCart()
{
    data_source = DataSource();
    database_connection = data_source.getConnection();
}

DAOCart::~DAOCart() {}

bool DAOCart::createCart(Cart cart)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO `vinyl_shop`.`cart` (`id`, `vinylList`, `client`) VALUES ('"
                    + QString::number(cart.getId()) + "', '" + cart.getVinylList() + "', '"
                    + QString::number(cart.getClient()) + "');";

      query.prepare(sql);

      if(query.exec())
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

bool DAOCart::readCart(int id)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "SELECT * FROM `vinyl_shop`.`cart` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Selected from vinyl_shop.cart!");

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
          qDebug("'query.exec()' failed! - SELECT vinyl_shop.cart");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - SELECT vinyl_shop.cart");
      return 0;
    }
}

bool DAOCart::updateCart(Cart cart)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "UPDATE `vinyl_shop`.`cart` SET `id` = '" + cart.getId() + "', `vinylList` = '"
                    + cart.getVinylList() + "', `client` = '" + cart.getClient() + "' WHERE `id` = '"
                    + cart.getId() + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Updated vinyl_shop.cart!");
          return 1;
      }
      else
      {
          qDebug("'query.exec()' failed! - UPDATE vinyl_shop.cart");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - UPDATE vinyl_shop.cart");
      return 0;
    }
}

bool DAOCart::deleteCart(int id)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "DELETE FROM `vinyl_shop`.`cart` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
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