#include <iostream>
#include "Space.h"
#include "Space1.h"
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << "digite um número qualquer : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro numero : " << std::endl;
    std:: cin >> num2;

    std::cout << "a divisão de " << num1 << " por " << num2 << " é : " << deve1::devesao(num1,num2) << std::endl;
    std::cout << "a divisão de " << num1 << " por " << num2 << " é : " << deve2::devesao(num1,num2) << std::endl;

    system("pause");
    return 0;
}
