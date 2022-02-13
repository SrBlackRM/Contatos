#include "mecanica.h"

mecanica::mecanica(){}

void mecanica::mostraLista(){
    string line;
    if(manContats.arqle.is_open()){
        while(!manContats.arqle.eof()){
            std::getline(manContats.arqle,line);
            cout << line << endl;
        }
    }
}

void mecanica::adicionaAmigo(){
    infosPessoas pessoa;
    string nome, email, telefone;
    cout << "Digite o nome: "; cin >> nome; pessoa.setNome(nome);
    cout << "Digite o email: "; cin >> email; pessoa.setEmail(email);
    cout << "Digite o telefone: "; cin >> telefone; pessoa.setTelefone(telefone);
    manContats.arq << "Pessoa " << pessoa.contagem << "\n" << pessoa.getNome() << "\n" << pessoa.getEmail() << "\n" << pessoa.getTelefone() << "\n\n\n";
}

void mecanica::removeAmigo(){

}

void mecanica::verificaOpcao(int opcao){
    switch(opcao){
        case 1:
            manContats.leArq();
            mostraLista();
            manContats.fechaArq();
            break;
        case 2:
            manContats.criaArq();
            adicionaAmigo();
            manContats.fechaArq();
            break;
        case 3:
            removeAmigo();
            break;
        default:
            cout << "ERRO de OPCAO";
            exit(0);
            break;
    }
}
