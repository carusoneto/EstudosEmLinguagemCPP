#include <iostream>
#include "Tipos.h"
#include "tipos1.h"
#include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << "digite um numero : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro numero : " << std::endl;
    std:: cin >> num2;

    std::cout << "a soma entre " << num1 << " e " << num2 << " é : " << soma1::soma(num1,num2) << std::endl;
    std::cout << "a soma entre " << num1 << " e " << num2 << " é : " << soma2::soma(num1,num2) << std::endl;

    system("pause");
    return 0;
}


