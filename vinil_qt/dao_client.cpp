#include "dao_client.h"

DAOClient::DAOClient(QSqlDatabase database_connection)
{
    this->database_connection = database_connection;
    if(!database_connection.isOpen()){
        database_connection.open();
    }
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

Client DAOClient::readClient(int id)
{
    Client client;

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

          std::vector<QString> res;

          if(!query.next())
          {
              qDebug("'query.next()' is false - SELECT vinyl_shop.client");
              qDebug() << query.lastError();
          }
          else
          {
              for(int i = 0; i < columns; i++)
                res.push_back(query.value(i).toString());

              int id = res[0].toInt();
              QString cpf = res[1];
              QString name = res[2];
              QString email = res[3];
              QString password = res[4];
              int vip = res[5].toInt();
              int rank = res[6].toInt();

              client = Client(id, cpf, name, email, password, vip, rank);
          }
      }
      else
      {
          qDebug("'query.exec()' failed! - SELECT vinyl_shop.client");
          qDebug() << query.lastError();
      }
    }
    else
    {
      qDebug("Connection failed! - SELECT vinyl_shop.client");
    }

    return client;
}
Client DAOClient::loginClient(QString cpf, QString senha)
{
    Client client;

    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);

      QString sql = "SELECT * FROM `vinyl_shop`.`client` WHERE `cpf` = "
              +cpf +" and `password` = "+senha+";";
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

          std::vector<QString> res;

          if(!query.next())
          {
              qDebug("'query.next()' is false - SELECT vinyl_shop.client");
              qDebug() << query.lastError();
          }
          else
          {
              for(int i = 0; i < columns; i++)
                res.push_back(query.value(i).toString());

              int id = res[0].toInt();
              QString cpf = res[1];
              QString name = res[2];
              QString email = res[3];
              QString password = res[4];
              int vip = res[5].toInt();
              int rank = res[6].toInt();

              client = Client(id, cpf, name, email, password, vip, rank);
          }
      }
      else
      {
          qDebug("'query.exec()' failed! - SELECT vinyl_shop.client");
          qDebug() << query.lastError();
      }
    }
    else
    {
      qDebug("Connection failed! - SELECT vinyl_shop.client");
    }

    return client;
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

