#ifndef ARMAZENA_H
#define ARMAZENA_H

#include <fstream>
#include <iostream>
using namespace std;

class armazena
{
    public:
        armazena();
        ~armazena();
        ofstream arq;
        ifstream arqle;
        int criaArq();
        int leArq();
        int editaArq();
        void fechaArq();
};

#endif // ARMAZENA_H
