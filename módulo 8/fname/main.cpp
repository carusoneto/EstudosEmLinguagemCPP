#include <iostream>
#include <tchar.h>
#include "name.h"

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << "digite um número qualquer : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro número : " << std::endl;
    std:: cin >> num2;

    std::cout << "a divisão de " << num1 << " e " << num2 << " é : " << dv1::deve(num1,num2) << std::endl;

    system("pause");
    return 0;
}
