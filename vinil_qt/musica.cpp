#include "musica.h"

Musica::Musica(int id, QString nome, double duracao) :
    id(id), nome(nome), duracao(duracao){};

int Musica::getId()
{
    return this->id;
}

void Musica::setId(int id)
{
    this->id = id;
}

QString Musica::getNome()
{
    return this->nome;
}

void Musica::setNome(QString nome)
{
    this->nome = nome;
}

double Musica::getDuracao()
{
    return this->duracao;
}

void Musica::setDuracao(double duracao)
{
    this->duracao = duracao;
}
