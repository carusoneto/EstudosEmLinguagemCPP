#include <iostream>
#include <tchar.h>

int soma (int num1, int num2)
{
    return (num1 + num2);
}

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num1,num2;

    std::cout << "soma de dois numeros usando uma funação " << std::endl;
    std::cout << "digite o primeiro numero : " << std::endl;
    std::cin >> num1;
    std::cout << "digite o segundo numero : " << std::endl;
    std::cin >> num2;

    std::cout << "a soma de " << num1 << " e " << num2 << " é : " << soma(num1,num2) << std::endl;

    return 0;

}
