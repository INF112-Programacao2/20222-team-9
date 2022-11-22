#include "disco.h"

Disco::Disco(int id, QString nome, int anoLancamento, QString genero, QString compositor, QString participacoes, std::vector<Musica> listaMusicas, double preco, int raridade) :
    id(id), nome(nome), anoLancamento(anoLancamento), genero(genero), compositor(compositor), participacoes(participacoes), listaMusicas(listaMusicas), preco(preco), raridade(raridade){};

int Disco::getId()
{
    return this->id;
}

void Disco::setId(int id)
{
    this->id = id;
}

QString Disco::getNome()
{
    return this->nome;
}

void Disco::setNome(QString nome)
{
    this->nome = nome;
}

int Disco::getAnoLancamento()
{
    return this->anoLancamento;
}

void Disco::setAnoLancamento(int anoLancamento)
{
    this->anoLancamento = anoLancamento;
}

QString Disco::getGenero()
{
    return this->genero;
}

void Disco::setGenero(QString genero)
{
    this->genero = genero;
}

QString Disco::getCompositor()
{
    return this->compositor;
}

void Disco::setCompositor(QString compositor)
{
    this->compositor = compositor;
}

QString Disco::getParticipacoes()
{
    return this->participacoes;
}

void Disco::setParticipacoes(QString participacoes)
{
    this->participacoes = participacoes;
}

std::vector<Musica> Disco::getListaMusicas()
{
    return this->listaMusicas;
}

void Disco::setListaMusicas(std::vector<Musica> listaMusicas)
{
    this->listaMusicas = listaMusicas;
}

double Disco::getPreco()
{
    return this->preco;
}

void Disco::setPreco(double preco)
{
    this->preco = preco;
}

int Disco::getRaridade()
{
    return this->raridade;
}

void Disco::setRaridade(int raridade)
{
    this->raridade = raridade;
}
