#ifndef MUSICA_H
#define MUSICA_H

#include <QString>

class Musica
{
private:
    int id;
    QString nome;
    double duracao;
public:
    Musica(int id, QString nome, double duracao);

    int getId();
    void setId(int id);
    QString getNome();
    void setNome(QString nome);
    double getDuracao();
    void setDuracao(double duracao);
};

#endif // MUSICA_H
