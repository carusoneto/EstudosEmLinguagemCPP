// digite um programa que mostre uma variavel do tipo char e double com seus endere�o e tamanho
#include <iostream>
#include <tchar.h>
#include <iomanip>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    char caracter ;
    double num;

    caracter = 'c';
    num = 1234.1234124;

    std::cout << "\t o valor da variavel c : " << caracter << std::endl;
    std::cout << "\t o endere�o da variavel c � : " << (void*)&caracter << std::endl;
    std::cout << "\t o tamanho da variavel c � : " << sizeof(caracter) << "bit " << "\n" << std::endl;

    std::cout << "o valor da variavel num � : " << std::setprecision(15) << num << std::endl;
    std::cout << "o endere�o da variavel num � : " << &num << std::endl;
    std::cout << "o tamanho da variavel num � : " << sizeof(num) << "\n" << std::endl;

    system("pause");
    return 0;
}
