#ifndef CONNECTION_EXCEPTION_H
#define CONNECTION_EXCEPTION_H
#include <stdexcept>
class ConnectionException : public std::exception{

    public:
    ConnectionException(){}
    virtual const char* what() const  noexcept override{
        return "Erro de conexao com o banco de dados\nVerifique se:\n->As informacoes de conexao com o banco de dados estao certas no arquivo data_source.cpp\n->O banco esta criado e configurado";
    }
};

#endif // CONNECTION_EXCEPTION_H
