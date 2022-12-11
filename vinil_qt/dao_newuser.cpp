#include "data_source.h"
#include "dao_newuser.h"

#include <QSqlQuery>
#include <QDebug>
#include "qsqlrecord.h"
#include "qsqlerror.h"

newUserDAO::newUserDAO()
{
    DataSource dao;
    //QSqlDatabase conn;
    this->conn = dao.createConnection();
    //if(conn.open());
}

newUserDAO::~newUserDAO() {}

bool newUserDAO::loginUsuario(QString cpf, QString senha)
{
    if(conn.open())
    {
      QSqlQuery query = QSqlQuery(conn);
      QString sql = "SELECT * FROM vinyl_shop.client WHERE cpf = '" + cpf + "' and senha = '" + senha + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug("Selected!");

          QSqlRecord rec = query.record();
          int cols = rec.count();

          QString temp;

          for(int c=0; c<cols; c++)
            temp += rec.fieldName(c) + ((c<cols-1)?"\t":"");

          qDebug() << temp;

          if(!query.next())
              return 0;
          else
          {
              temp = "";

              for(int c=0; c<cols; c++)
                temp += query.value(c).toString() + ((c<cols-1)?"\t":"");

              qDebug() << temp;

              return 1;
          }

      }
      else
      {
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed!");
      return 0;
    }
}
bool newUserDAO::inserirUsuario(QString nome, QString cpf, QString senha, QString email, int vip, int rank)
{
    if(conn.open())
    {
      QSqlQuery query = QSqlQuery(conn);
      QString sql = "INSERT INTO `vinyl_shop`.`client` (`cpf`, `name`, `password`, `email`, `vip`, `rank`) values ('"+ cpf + "', '" + nome + "', '" + senha + "', '"+ email +"', '"+ QString::number(vip) +"', '"+ QString::number(rank) +"');";

      query.prepare(sql);

      if(query.exec())
          qDebug("Inserted!");
      else
      {
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug("Connection failed!");
      return 0;
    }

    return 1;
}




