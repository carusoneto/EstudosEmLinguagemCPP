#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int numvidas,pontucao;

    numvidas = 5;
    pontucao = 1350;

    std::cout << "**************************" << std::endl;
    std::cout << "vidas jogador : " << numvidas << std::endl;
    std::cout << "pontuação : " << pontucao << std::endl;
    std::cout << "**************************" << std::endl;
    system ("pause");
    return 0;
}
