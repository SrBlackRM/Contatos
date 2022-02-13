#include "armazena.h"

armazena::armazena(){

}

armazena::~armazena(){
    fechaArq();
}

int armazena::criaArq(){
    arq.open("contatos.txt", ios::in);
    if(!arq){
        arq.open("contatos.txt", ios::out);
    }else{
        cout << "Arquivo existente!!";
        exit(0);
    }
    return 1;
}
int armazena::leArq(){
    arqle.open("contatos.txt", ios::in);
}
int armazena::editaArq(){

}

void armazena::fechaArq(){
    arq.close();
}
