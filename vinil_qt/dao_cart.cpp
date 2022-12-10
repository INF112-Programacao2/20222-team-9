#include "dao_cart.h"

DAOCart::DAOCart(QSqlDatabase database_connection)
{
    this->database_connection = database_connection;
    if(!database_connection.isOpen()){
        database_connection.open();
    }
}

DAOCart::~DAOCart() {}

Cart DAOCart::createCart(Client c)
{
    if(database_connection.isOpen())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO vinyl_shop.cart (client_id,total) VALUES ('"
                    +QString::number(c.getId())+
                    "' , '0');";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Inserted in vinyl_shop.cart!");
          //Cart(int id, Client client, std::vector<Vinyl> vinylList, double total);
          std::vector<Vinyl> vinylList;
          Cart cart(query.lastInsertId().toInt(),c,  vinylList, 0);
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

bool DAOCart::insertCartItens(int idVinyl, int cart_id)
{
    if(database_connection.isOpen())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO vinyl_shop.cart_items(vinyl_id, cart_id) VALUES ('"+
                QString::number(idVinyl)+
                    "','"+
                QString::number(cart_id)+
                    "');";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Inserted in vinyl_shop.cart!");
          //Cart(int id, Client client, std::vector<Vinyl> vinylList, double total);
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
    DAOVinyl dao_vinyl(ds.getConnection());
    std::vector<Vinyl> vinylList;
    Cart cart;

    if(database_connection.isOpen())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "SELECT * FROM vinyl_shop.cart WHERE client_id = '"+
              QString::number(client_id)+
                  "';";
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

Cart DAOCart::readByCartId(int cart_id)
{
    DataSource ds;
    DAOClient dao_client(ds.getConnection());
    Client client;
    DAOVinyl dao_vinyl(ds.getConnection());
    std::vector<Vinyl> vinylList;
    Cart cart;

    if(database_connection.isOpen())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "SELECT * FROM `vinyl_shop`.`cart` WHERE id = '"+
              QString::number(cart_id)+
                  "';";
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


bool DAOCart::deleteCart(int client_id)
{
    if(database_connection.isOpen())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "DELETE FROM 'vinyl_shop'.'cart' WHERE 'client_id' = '" + QString::number(client_id) + "';";

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
