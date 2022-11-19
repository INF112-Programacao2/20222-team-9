#include "dao_connection_factory.h"
#include "dao_cliente.h"

#include "QSqlQuery"
#include "qsqlrecord.h"
#include "qsqlerror.h"

DAOCliente::DAOCliente()
{
    DAOConnectionFactory dao;
    this->connection = dao.getConexao();
}

DAOCliente::~DAOCliente()
{

}

bool DAOCliente::inserirCliente(Cliente cliente)
{
    if(this->connection.open())
    {
      QSqlQuery query = QSqlQuery(connection);
      QString sql = "INSERT INTO bd_vinil.cliente(cpf, nome, email, senha) VALUES ('"
                    + cliente.getCpf() + "', '" + cliente.getNome() + "', '"
                    + cliente.getEmail() + "', '" + cliente.getSenha() + "');";

      query.prepare(sql);

      if(query.exec())
          qDebug( "Inserted!" );
      else
      {
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug( "Connection failed!" );
      return 0;
    }

    return 1;
}

bool DAOCliente::visualizarDadosCliente(int id)
{
    if(this->connection.open())
    {
      QSqlQuery query = QSqlQuery(connection);
      QString sql =  "SELECT * FROM bd_vinil.cliente WHERE id = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
      {
          qDebug( "Selected!" );

          QSqlRecord rec = query.record();
          int cols = rec.count();

          QString temp;

          for( int c=0; c<cols; c++ )
            temp += rec.fieldName(c) + ((c<cols-1)?"\t":"");

          qDebug() << temp;

          if(!query.next()){
              qDebug( "tatu" );
              return 0;
          }
          else
          {
              temp = "";

              for( int c=0; c<cols; c++ )
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
      qDebug( "Connection failed!" );
      return 0;
    }
}

bool DAOCliente::atualizarDadosCliente(Cliente cliente)
{
    if(this->connection.open())
    {
      QSqlQuery query = QSqlQuery(connection);
      QString sql = "UPDATE bd_vinil.cliente SET cpf = '"
                    + cliente.getCpf() + "', nome = '" + cliente.getNome() + "', email = '"
                    + cliente.getEmail() + "', senha = '" + cliente.getSenha() + "' WHERE id = '" + QString::number(cliente.getId()) + "';";

      query.prepare(sql);

      if(query.exec())
          qDebug( "Updated!" );
      else
      {
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug( "Connection failed!" );
      return 0;
    }

    return 1;
}

bool DAOCliente::excluirCliente(int id)
{
    if(this->connection.open())
    {
      QSqlQuery query = QSqlQuery(connection);
      QString sql = "DELETE FROM bd_vinil.cliente WHERE id = '" + QString::number(id) + "';";

      query.prepare(sql);

      if(query.exec())
          qDebug( "Deleted!" );
      else
      {
          qDebug() << query.lastError();
          return 0;
      }
    }
    else
    {
      qDebug( "Connection failed!" );
      return 0;
    }

    return 1;
}
