#include <iostream>
#include <tchar.h>
#include "red.h"

void soma (int* a, int* b)
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int ax = *a;
    *a = *b;
    *b = ax;

    std::cout << "valor de num1 dentro da fun��o : " << a << std::endl;
    std::cout << "endere�o de num1, que � equivalente a variavel local a, dentro da fun��o : " << &a << std::endl;
    std::cout << "valor de num2 dentro da fun��o : " << b << std::endl;
    std::cout << "endere�o de num1, que � equivalente a variavel local b, dentro da fun��o : " << &b << std::endl;

}
