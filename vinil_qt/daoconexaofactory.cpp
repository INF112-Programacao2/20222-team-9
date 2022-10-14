#include "daoconexaofactory.h"
#include "QtSql"
#include "QSqlDatabase"
#include "QMessageBox"

//#include <QSqlDatabase>


DAOConexaoFactory::DAOConexaoFactory()
{
}

DAOConexaoFactory::~DAOConexaoFactory()
{
}

QSqlDatabase DAOConexaoFactory::getConexao()
{
    QSqlDatabase db =QSqlDatabase::addDatabase("QMYSQL", "planning");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("bd_vinil");
    return db;

}



/*          QSqlQuery query= QSqlQuery(db);
          query.prepare( "SELECT * FROM user_teste WHERE cpf= cpf");
            if( !query.exec() )
              qDebug() << query.lastError();
            else
            {
              qDebug( "Selected!" );

              QSqlRecord rec = query.record();
              int cols = rec.count();

              QString temp;
              for( int c=0; c<cols; c++ )
                temp += rec.fieldName(c) + ((c<cols-1)?"\t":"");
              qDebug() << temp;

              while( query.next() )
              {
                temp = "";
                for( int c=0; c<cols; c++ )
                  temp += query.value(c).toString() + ((c<cols-1)?"\t":"");
                qDebug() << temp;
              }
            }*/
