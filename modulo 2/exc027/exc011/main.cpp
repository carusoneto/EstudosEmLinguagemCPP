#include <iostream>
#include <tchar.h>

int main ()
{
    // fa�a um programa que mostre as informa��es no come�o e durante o jogo da vida e score do jogador

    _tsetlocale(LC_ALL,_T("portuguese")); // funcao que configura o console do windows para comportar acentua��o ( antigo DOS )
    int vidas,score;
    vidas = 5;
    score = 1350;

    std::cout << "****** COME�O DO JOGO ****** \n";
    std::cout << "VIDAS : " << vidas << std::endl;
    std::cout << "pontua��o : " << score << std::endl;

    vidas -= 1;
    score += 350;

    std::cout << "****** DURANTE O JOGO ******" << std::endl;
    std::cout << "VIDAS : " << vidas << std::endl;
    std::cout << "pontua��o : " << score << std::endl;
    std::cout << "endere�o de VIDAS : " << &vidas << std::endl;
    std::cout << "tamanho da variavel vidas  : " << sizeof (vidas) << std::endl;

    system("pause");
    system("color 5f");
    return 0;

}
