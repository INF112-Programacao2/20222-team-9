#include "cliente.h"

//inclusão para testes:
#include <iostream>

Cliente::Cliente(int id, QString cpf, QString nome, QString email, QString senha) :
    id(id), cpf(cpf), nome(nome), email(email), senha(senha){};

int Cliente::getId()
{
    return this->id;
}

void Cliente::setId(int id)
{
    this->id = id;
}

QString Cliente::getCpf()
{
    return this->cpf;
}

void Cliente::setCpf(QString cpf)
{
    this->cpf = cpf;
}

QString Cliente::getNome()
{
    return this->nome;
}

void Cliente::setNome(QString nome)
{
    this->nome = nome;
}

QString Cliente::getEmail()
{
    return this->email;
}

void Cliente::setEmail(QString email)
{
    this->email = email;
}

QString Cliente::getSenha()
{
    return this->senha;
}

void Cliente::setSenha(QString senha)
{
    this->senha = senha;
}

//depende da implementação da classe Compra
void calculaCompra(Compra compra)
{
    //para testes::
    std::cout << "entrou em calculaCompra(Compra compra)" << std::endl;
}
