#include "dao_client.h"

DAOClient::DAOClient()
{
    database_connection = data_source.getConnection();
}

DAOClient::~DAOClient() {}

bool DAOClient::createClient(Client client)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO `vinyl_shop`.`client` (`cpf`, `name`, `email`, `password`, `vip`, `rank`) VALUES ('"
                    + client.getCpf() + "', '" + client.getName() + "', '"
                    + client.getEmail() + "', '" + client.getPassword() + "', '"
                    + QString::number(client.getVip()) + "', '-1');";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Inserted in vinyl_shop.client!");
          return 1;
      }
      else
      {
          qDebug("'query.exec()' failed! - INSERT vinyl_shop.client");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - INSERT vinyl_shop.client");
      return 0;
    }
}

bool DAOClient::readClient(int id)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "SELECT * FROM `vinyl_shop`.`client` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Selected from vinyl_shop.client!");

          QSqlRecord record = query.record();
          int columns = record.count();

          QString result;

          for(int i = 0; i < columns; i++)
            result += record.fieldName(i) + ((i < columns - 1)? "\\" : "");

          qDebug() << result;

          if(!query.next())
          {
              qDebug("'query.next()' is false - SELECT vinyl_shop.client");
              qDebug() << query.lastError();
              return 0;
          }
          else
          {
              result = "";

              for(int i = 0; i < columns; i++)
                result += query.value(i).toString() + ((i < columns - 1)? "\\" : "");

              qDebug() << result;

              return 1;
          }
      }
      else
      {
          qDebug("'query.exec()' failed! - SELECT vinyl_shop.client");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - SELECT vinyl_shop.client");
      return 0;
    }
}

bool DAOClient::updateClient(Client client)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "UPDATE `vinyl_shop`.`client` SET cpf = '"
                    + client.getCpf() + "', `name` = '" + client.getName() + "', `email` = '"
                    + client.getEmail() + "', `password` = '" + client.getPassword() + "', `vip` = '"
                    + QString::number(client.getVip()) + "' WHERE `id` = '" + QString::number(client.getId()) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Updated in vinyl_shop.client!");
          return 1;
      }
      else
      {
          qDebug("'query.exec()' failed! - UPDATE vinyl_shop.client");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - UPDATE vinyl_shop.client");
      return 0;
    }
}

bool DAOClient::deleteClient(int id)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "DELETE FROM `vinyl_shop`.`client` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Deleted from vinyl_shop.client!");
          return 1;
      }
      else
      {
          qDebug("'query.exec()' failed! - DELETE vinyl_shop.client");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - DELETE vinyl_shop.client");
      return 0;
    }
}
