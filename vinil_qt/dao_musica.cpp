#include "dao_musica.h"

#include "QSqlQuery"
#include "qsqlrecord.h"
#include "qsqlerror.h"

DAOMusica::DAOMusica()
{
    this->database_connection = this->connection_factory.getConnection();
}

DAOMusica::~DAOMusica() {}

bool DAOMusica::criarMusica(Musica musica)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "INSERT INTO bd_vinil.musica (nome, duracao) VALUES ('"
                      + musica.getNome() + "', '" + QString::number(musica.getDuracao()) + "');";

        query.prepare(sql);

        if(query.exec())
        {
            qDebug("Inserted in bd_vinil.musica!");
            return 1;
        }
        else
        {
            qDebug("Execution failed! - INSERT bd_vinil.musica");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Connection failed! - INSERT bd_vinil.musica!");
        return 0;
    }
}

bool DAOMusica::lerDadosMusica(int id)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "SELECT * FROM bd_vinil.musica WHERE id = '" + QString::number(id) + "';";

        query.prepare(sql);

        if(query.exec())
        {
            qDebug("Selected from bd_vinil.musica!");

            QSqlRecord record = query.record();
            int columns = record.count();

            QString result;

            for (int i = 0; i < columns; i++)
                result += record.fieldName(i) + ((i < columns - 1) ? "\\" : "");

            qDebug() << result;

            if(!query.next())
            {
                qDebug("Execution failed! - SELECT bd_vinil.musica");
                qDebug() << query.lastError();
                return 0;
            }
            else
            {
                result = "";

                for (int i = 0; i < columns; i++)
                    result += query.value(i).toString() + ((i < columns - 1) ? "\\" : "");

                qDebug() << result;
            }
        }

        return 1;
    }
    else
    {
        qDebug("Connection failed! - SELECT bd_vinil.musica");
        return 0;
    }
}

bool DAOMusica::alterarDadosMusica(Musica musica)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql = "UPDATE bd_vinil.musica SET nome = '"
                      + musica.getNome() + "', duracao = '" + QString::number(musica.getDuracao())
                      + "' WHERE id = '" + QString::number(musica.getId()) + "';";

        query.prepare(sql);

        if(query.exec())
        {
            qDebug("Updated in bd_vinil.musica!");
            return 1;
        }
        else
        {
            qDebug("Execution failed! - UPDATE bd_vinil.musica");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Conneciton failed! - UPDATE bd_vinil.musica");
        return 0;
    }
}

bool DAOMusica::deletarMusica(int id)
{
    if(database_connection.open())
    {
        QSqlQuery query = QSqlQuery(database_connection);
        QString sql =  "DELETE FROM bd_vinil.musica WHERE id = '" + QString::number(id) + "';";

        query.prepare(sql);

        if(query.exec())
        {
            qDebug("Deleted from bd_vinil.musica!");
            return 1;
        }
        else
        {
            qDebug("Execution failed! - DELETE bd_vinil.musica");
            qDebug() << query.lastError();
            return 0;
        }
    }
    else
    {
        qDebug("Conneciton failed! - DELETE bd_vinil.musica");
        return 0;
    }
}
