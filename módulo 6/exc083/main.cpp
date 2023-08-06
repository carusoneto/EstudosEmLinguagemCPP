#include <iostream>
#include <tchar.h>
#include "red.h"

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << "digite um valor : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro numero : " << std::endl;
    std:: cin >> num2;

    std::cout << "valores das variaveis num1 e num2 antes da chamada da funcação : " << std::endl;
    std::cout << "valor de num1 : " << num1 << std::endl;
    std::cout << "endereço de num1 : " << &num1 << std::endl;
    std::cout << "valor de num2 : " << num2 << std::endl;
    std::cout << "endereço de num2 : " << &num2 << std::endl;
    std::cout << "---------------------------------" << std::endl;
    soma(&num1,&num2);
    std::cout << "---------------------------------" << std::endl;
    std::cout << "valores das variaveis num1 e num2 depois da chamada da funcação : " << std::endl;
    std::cout << "valor de num1 : " << num1 << std::endl;
    std::cout << "endereço de num1 : " << &num1 << std::endl;
    std::cout << "valor de num2 : " << num2 << std::endl;
    std::cout << "endereço de num2 : " << &num2 << std::endl;

    system("pause");
    return 0;
}
