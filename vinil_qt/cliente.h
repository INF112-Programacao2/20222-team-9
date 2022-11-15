#ifndef CLIENTE_H
#define CLIENTE_H

#include "Compra.h"
#include <string>

class Cliente
{
private:
    int id;
    std::string cpf, nome, email, senha;

public:
    Cliente(int id, std::string cpf, std::string nome, std::string email, std::string senha);

    //futuramente descartar os que não forem utilizados
    int getId();
    void setId(int id);
    std::string getCpf();
    void setCpf(std::string cpf);
    std::string getNome();
    void setNome(std::string nome);
    std::string getEmail();
    void setEmail(std::string email);
    std::string getSenha();
    void setSenha(std::string senha);

    void calculaCompra(Compra compra);
};

#endif // CLIENTE_H
