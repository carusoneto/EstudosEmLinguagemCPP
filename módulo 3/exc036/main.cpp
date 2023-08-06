#include <iostream>
#include <tchar.h>
#include <string>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    std::printf("exercício de tabela verdade \n");

    int num = 12;
    bool comparacao;

    comparacao = (num > 40) || (num % 2 == 0) && (num <= 10);

    std::printf("o valor retornado pela variavel comparacao é %i", comparacao);

    return 0;
}
