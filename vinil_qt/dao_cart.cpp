#include "dao_cart.h"

DAOCart::DAOCart()
{
    database_connection = data_source.getConnection();
}

DAOCart::~DAOCart() {}

bool DAOCart::createCart(Cart cart)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO `vinyl_shop`.`cart` (`id`, `client_id`) VALUES ('"
                    + QString::number(cart.getId()) + "', '" + QString::number(cart.getClient().getId()) + "');";

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

Cart DAOCart::readCart(int id)
{
    DAOClient dao_client;
    Client client;
    DAOVinyl dao_vinyl;
    std::vector<Vinyl> vinylList;
    Cart cart;

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

          std::vector<QString> res;

          if(!query.next())
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
            vinylList = dao_vinyl.readCartItems(id);
            double total = res[2].toDouble();

            cart = Cart(id, client, vinylList, total);
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
