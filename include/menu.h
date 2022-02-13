#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

class menu{
    int opcao;

public:
    menu();
    int escolhaOpcao();
    void mostraMenu();
};

#endif // MENU_H
