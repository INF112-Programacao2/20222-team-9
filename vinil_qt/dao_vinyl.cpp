#include "dao_vinyl.h"

DAOVinyl::DAOVinyl()
{
    database_connection = data_source.getConnection();
}

DAOVinyl::~DAOVinyl() {}

bool DAOVinyl::createVinyl(Vinyl vinyl)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "INSERT INTO `vinyl_shop`.`vinyl` (`name`, `genre`, `composer`, `featuring`, `release_year`, `rarity`, `price`) VALUES ('"
                    + vinyl.getName() + "', '" + vinyl.getGenre() + "', '"
                    + vinyl.getComposer() + "', '" + vinyl.getFeaturing() + "', '"
                    + QString::number(vinyl.getReleaseYear()) + "', '" + QString::number(vinyl.getRarity()) + "', '" + QString::number(vinyl.getPrice()) + "');";

      query.prepare(sql);

      if(query.exec())
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

bool DAOVinyl::readVinyl(int id)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "SELECT * FROM `vinyl_shop`.`vinyl` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Selected from vinyl_shop.vinyl!");

          QSqlRecord record = query.record();
          int columns = record.count();

          QString result;

          for(int i = 0; i < columns; i++)
            result += record.fieldName(i) + ((i < columns - 1)? "\\" : "");

          qDebug() << result;

          if(!query.next())
          {
              qDebug("'query.next()' is false - SELECT vinyl_shop.vinyl");
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
          qDebug("'query.exec()' failed! - SELECT vinyl_shop.vinyl");
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed! - SELECT vinyl_shop.vinyl");
      return 0;
    }
}

bool DAOVinyl::updateVinyl(Vinyl vinyl)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "UPDATE `vinyl_shop`.`vinyl` SET name = '"
                    + vinyl.getName() + "', `genre` = '" + vinyl.getGenre() + "', `composer` = '"
                    + vinyl.getComposer() + "', `featuring` = '" + vinyl.getFeaturing() + "', `release_year` = '"
                    + QString::number(vinyl.getReleaseYear()) + "', `rarity` = '" + QString::number(vinyl.getRarity()) + "', `price` = '"
                    + QString::number(vinyl.getPrice()) + "' WHERE `id` = '" + QString::number(vinyl.getId()) + "';";

      query.prepare(sql);

      if(query.exec())
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

bool DAOVinyl::deleteVinyl(int id)
{
    if(database_connection.open())
    {
      QSqlQuery query = QSqlQuery(database_connection);
      QString sql = "DELETE FROM `vinyl_shop`.`vinyl` WHERE `id` = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
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
