#ifndef INFOSPESSOAS_H
#define INFOSPESSOAS_H

#include <string>
using namespace std;

class infosPessoas{
    string nome;
    string email;
    string telefone;

public:
    infosPessoas();
    static int contagem;
    void setNome(string novoNome);
    void setEmail(string novoEmail);
    void setTelefone(string novoTelefone);
    string getNome();
    string getEmail();
    string getTelefone();
};

#endif // INFOSPESSOAS_H

