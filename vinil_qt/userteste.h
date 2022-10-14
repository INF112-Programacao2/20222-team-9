#ifndef USERTESTE_H
#define USERTESTE_H
#include "string"
#include <QtSql/QSqlDatabase>

class UserTeste
{
private:
    // Atributos
    long id;
    QString nome;
    QString cpf;
    QString senha;

public:

    // Construtor
    UserTeste();


    // Construtor Overload
    UserTeste(long id, const QString &nome, const QString &cpf, const QString &senha);

    // Metodos Getter e Setter
    void setId(long id);
    long getId();


    const QString &getNome() const;
    const QString &getCpf() const;
    void setCpf(const QString &newCpf);
    const QString &getSenha() const;
    void setSenha(const QString &newSenha);
};

#endif // USERTESTE_H
