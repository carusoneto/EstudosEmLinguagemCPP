#include <iostream>
#include "revi.h"
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num1,num2;

    std::cout << "digite um numero : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro numero : " << std::endl;
    std:: cin >> num2;

    std::cout << dv1::deve(num1,num2) << std::endl;
    std::cout << dv2::deve(num1,num2) << std::endl;

    system("pause");
    return 0;
}
