#include <iostream>
#include "Cabecalio.h"
#include <tchar.h>

void Principal()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << " digite um numero : " << std::endl;
    std:: cin >> num1;
    std::cout << " digite outro numero : " << std::endl;
    std:: cin >> num2;

    std::cout << "a divisão de " << num1 << " e " << num2 << " é : " << deve(num1,num2) << std::endl;

}

float deve(int num1, int num2)
{
    return (float) num1 / (float) num2;
}
