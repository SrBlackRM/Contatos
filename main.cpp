/*

Uma simples agenda telefônica, com nome, telefone, email e talvez alguns dados a mais.

O usuário acessa/instala e seus dados ficam salvos
Deve ser possível realizar buscas por qualquer campo
Se for web ou mobile, botão para abrir whatsapp com o contato

*/
#include <iostream>
#include "menu.h"
#include "mecanica.h"
#include "armazena.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    menu mn;
    mecanica mec;

    mn.mostraMenu();
    int opcao = mn.escolhaOpcao();
    mec.verificaOpcao(opcao);

    return 0;
}



