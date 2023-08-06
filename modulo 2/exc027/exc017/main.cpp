#include <iostream>
#include <tchar.h>
#include <iomanip>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    char caracter = 'c';
    double num = 1234.0952;
    float num1 = 123.123f;

    std::cout << "o valor da variavel caracter é : " << caracter << "\n";
    std::cout << "e o endereço da variavel caracter é : " << (void*)&caracter << "\n";
    std::cout << "e o tamanho da variavel caracter é : " << sizeof(caracter) << "bit"<< "\n" << std::endl;

    std::cout << "o valor da variavel num é : " << std::setprecision(15) << num << "\n";
    std::cout << "e o endereço da variavel num é : " << &num << "\n";
    std::cout << "e o tamanho da variavel num é : " << sizeof(num) << "bytes" << "\n" <<std::endl;

    std::cout << "o valor da variavel num1 é : " << num1 << "\n";
    std::cout << "e o endereço da variavel num1 é : " << &num1 << "\n";
    std::cout << "e o tamanho da variavel num1 é : " << sizeof(num1) << "bytes" << std::endl;

    return 0;

}
