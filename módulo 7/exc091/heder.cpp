#include <iostream>
#include "heder.h"

// em uma "adi��o" p�s fixada � como se acontecesse primeiro o std da variavel, dessa maneira
// std::cout << i
// i = i + 1 ou i += 1
// caso fosse pr� fixado eu primeiro faria a adi��o pra depois fazer o std::cout, dessa maneira
// i = i + 1 ou i += 1
// std::cout << i ;
void contagem()
{
    int i{0};

    for (i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
}
// quando falamos de desrreferenciar, estamos desrreferenciado o ponteiro e estamos indo na variavel a apontada;
void troca(int *num1, int *num2)
{
    int ax = *num1;

    *num1 = *num2;
    *num2 = ax;
}
