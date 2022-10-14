#ifndef DACONEXAOFACTORY_H
#define DACONEXAOFACTORY_H

#include "string"

class DAConexaoFactory
{
private:

    // Define constantes para fonte de dados
    const int MSSQL = 1;

    // Define dados do usuario
   //QString dns, usuario, senha;

    // Define banco de dados

public:

    DAConexaoFactory();
    ~DAConexaoFactory();

    int getConexao();
};


#endif // DACONEXAOFACTORY_H
