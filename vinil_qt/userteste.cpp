#include "userteste.h"
#include "string"

UserTeste::UserTeste()
{
}
UserTeste::UserTeste(long id, const QString &nome, const QString &cpf, const QString &senha){
    this->id = id;
    this->nome = nome;
    this->cpf = cpf;
    this->senha = senha;
}

const QString &UserTeste::getNome() const
{
    return nome;
}

const QString &UserTeste::getCpf() const
{
    return cpf;
}

void UserTeste::setCpf(const QString &newCpf)
{
    cpf = newCpf;
}

const QString &UserTeste::getSenha() const
{
    return senha;
}

void UserTeste::setSenha(const QString &newSenha)
{
    senha = newSenha;
}


