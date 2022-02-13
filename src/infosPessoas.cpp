#include "infosPessoas.h"

infosPessoas::infosPessoas(){
    nome = "";
    email = "";
    telefone = "";
    contagem += 1;
}

int infosPessoas::contagem = 0;

void infosPessoas::setNome( string novoNome ){ nome = novoNome; }

void infosPessoas::setEmail( string novoEmail ){ email = novoEmail; }

void infosPessoas::setTelefone(string novoTelefone){ telefone = novoTelefone; }

string infosPessoas::getNome(){ return nome; }

string infosPessoas::getEmail(){ return email; }

string infosPessoas::getTelefone(){ return telefone; }
