#include "dao_connection_factory.h"
#include "testeuserdao.h"

#include "QSqlQuery"
#include "qsqlrecord.h"
#include "qsqlerror.h"

TesteUserDAO::TesteUserDAO()
{
    DAOConnectionFactory dao;
    this->conn = dao.getConnection();
}

TesteUserDAO::~TesteUserDAO() {}

bool TesteUserDAO::loginUsuario(QString cpf, QString senha)
{
    if(conn.open())
    {
      QSqlQuery query = QSqlQuery(conn);
      QString sql = "SELECT * FROM bd_vinil.user_teste WHERE cpf = '" + cpf + "' and senha = '" + senha + "';";

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
bool TesteUserDAO::inserirUsuario(QString nome, QString cpf, QString senha)
{
    if(conn.open())
    {
      QSqlQuery query = QSqlQuery(conn);
      QString sql = "INSERT INTO bd_vinil.user_teste (nome, cpf, senha) values ('"
              + nome + "', '" + cpf + "', '" + senha + "');";

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




