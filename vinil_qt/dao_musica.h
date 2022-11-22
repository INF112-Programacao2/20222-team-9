#ifndef DAOMUSICA_H
#define DAOMUSICA_H

#include "musica.h"
#include "dao_connection_factory.h"

class DAOMusica
{
private:
    DAOConnectionFactory connection_factory;
    QSqlDatabase database_connection;
public:
    DAOMusica();
    ~DAOMusica();

    bool criarMusica(Musica musica);
    bool lerDadosMusica(int id);
    bool alterarDadosMusica(Musica musica);
    bool deletarMusica(int id);
};

#endif // DAOMUSICA_H
