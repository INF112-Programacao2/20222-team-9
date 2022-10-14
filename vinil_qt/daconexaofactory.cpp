#include "daconexaofactory.h"
#include "QtSql"
#include "QSqlDatabase"
#include "QMessageBox"

//#include <QSqlDatabase>


DAConexaoFactory::DAConexaoFactory()
{
}

DAConexaoFactory::~DAConexaoFactory()
{
}

int DAConexaoFactory::getConexao()
{
    QSqlDatabase db =QSqlDatabase::addDatabase("QMYSQL", "planning");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("bd_vinil");

      if(db.open()){
          QSqlQuery query= QSqlQuery(db);
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
            }

           return 1;
          //QMessageBox::information(this, "Connection","DEU BOM");
      }else{
          return 0;
      }

}
