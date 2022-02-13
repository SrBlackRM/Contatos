#ifndef MECANICA_H
#define MECANICA_H

#include <iostream>
#include <fstream>
#include <string>
#include "infosPessoas.h"
#include "armazena.h"

using namespace std;

class mecanica{
public:
    mecanica();
    armazena manContats;
    void mostraLista();
    void adicionaAmigo();
    void removeAmigo();
    void verificaOpcao(int opcao);
};

#endif // MECANICA_H
