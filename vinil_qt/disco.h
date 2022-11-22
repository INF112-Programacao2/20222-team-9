#ifndef DISCO_H
#define DISCO_H

#include "musica.h"
#include <QString>
#include <vector>

class Disco
{
private:
    int id;
    QString nome;
    int anoLancamento;
    QString genero;
    QString compositor;
    QString participacoes;
    std::vector<Musica> listaMusicas;
    double preco;
    int raridade;

public:
    Disco(int id, QString nome, int anoLancamento, QString genero, QString compositor, QString participacoes, std::vector<Musica> listaMusicas, double preco, int raridade);

    int getId();
    void setId(int id);
    QString getNome();
    void setNome(QString nome);
    int getAnoLancamento();
    void setAnoLancamento(int anoLancamento);
    QString getGenero();
    void setGenero(QString genero);
    QString getCompositor();
    void setCompositor(QString compositor);
    QString getParticipacoes();
    void setParticipacoes(QString participacoes);
    std::vector<Musica> getListaMusicas();
    void setListaMusicas(std::vector<Musica> listaMusicas);
    double getPreco();
    void setPreco(double preco);
    int getRaridade();
    void setRaridade(int raridade);
};

#endif // DISCO_H
