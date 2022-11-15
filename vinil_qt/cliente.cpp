#include "cliente.h"

//inclusão para testes:
#include <iostream>

Cliente::Cliente(int id, std::string cpf, std::string nome, std::string email, std::string senha) :
    id(id), cpf(cpf), nome(nome), email(email), senha(senha){};

int Cliente::getId()
{
    return this->id;
}

void Cliente::setId(int id)
{
    this->id = id;
}

std::string Cliente::getCpf()
{
    return this->cpf;
}

void Cliente::setCpf(std::string cpf)
{
    this->cpf = cpf;
}

std::string Cliente::getNome()
{
    return this->nome;
}

void Cliente::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Cliente::getEmail()
{
    return this->email;
}

void Cliente::setEmail(std::string email)
{
    this->email = email;
}

std::string Cliente::getSenha()
{
    return this->senha;
}

void Cliente::setSenha(std::string senha)
{
    this->senha = senha;
}

//depende da implementação da classe Compra
void calculaCompra(Compra compra)
{
    //para testes::
    std::cout << "entrou em calculaCompra(Compra compra)" << std::endl;
}
