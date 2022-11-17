#ifndef DAO_CLIENTE_H
#define DAO_CLIENTE_H

#include "qsqldatabase.h"
#include "cliente.h"

class DAOCliente
{
private:
    QSqlDatabase connection;
    QString error;
    char msg[255];
public:
    DAOCliente();
    ~DAOCliente();

    bool inserirCliente(Cliente cliente);
    bool visualizarDadosCliente(int id);
    bool atualizarDadosCliente(Cliente cliente);
    bool excluirCliente(int id);

    QString getError();
};

#endif // DAO_CLIENTE_H
