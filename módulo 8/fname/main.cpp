#include <iostream>
#include <tchar.h>
#include "name.h"

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << "digite um n�mero qualquer : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro n�mero : " << std::endl;
    std:: cin >> num2;

    std::cout << "a divis�o de " << num1 << " e " << num2 << " � : " << dv1::deve(num1,num2) << std::endl;

    system("pause");
    return 0;
}
