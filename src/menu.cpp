#include "menu.h"

menu::menu()
{
    //ctor
}

int menu::escolhaOpcao(){
    int opcao;
    cin >> opcao;
    return opcao;
}

void menu::mostraMenu(){
    cout << "Escolha a opção do menu:\n"
         << " 1 - Ver lista de amigos\n"
         << " 2 - Adicionar um amigo na lista\n"
         << " 3 - Remover um amigo na lista\n\n\n";
}
