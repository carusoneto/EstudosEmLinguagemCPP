#include <iostream>
#include <tchar.h>
#include "red.h"

void soma (int* a, int* b)
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int ax = *a;
    *a = *b;
    *b = ax;

    std::cout << "valor de num1 dentro da função : " << a << std::endl;
    std::cout << "endereço de num1, que é equivalente a variavel local a, dentro da função : " << &a << std::endl;
    std::cout << "valor de num2 dentro da função : " << b << std::endl;
    std::cout << "endereço de num1, que é equivalente a variavel local b, dentro da função : " << &b << std::endl;

}
