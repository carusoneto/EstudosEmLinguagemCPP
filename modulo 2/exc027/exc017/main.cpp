#include <iostream>
#include <tchar.h>
#include <iomanip>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    char caracter = 'c';
    double num = 1234.0952;
    float num1 = 123.123f;

    std::cout << "o valor da variavel caracter � : " << caracter << "\n";
    std::cout << "e o endere�o da variavel caracter � : " << (void*)&caracter << "\n";
    std::cout << "e o tamanho da variavel caracter � : " << sizeof(caracter) << "bit"<< "\n" << std::endl;

    std::cout << "o valor da variavel num � : " << std::setprecision(15) << num << "\n";
    std::cout << "e o endere�o da variavel num � : " << &num << "\n";
    std::cout << "e o tamanho da variavel num � : " << sizeof(num) << "bytes" << "\n" <<std::endl;

    std::cout << "o valor da variavel num1 � : " << num1 << "\n";
    std::cout << "e o endere�o da variavel num1 � : " << &num1 << "\n";
    std::cout << "e o tamanho da variavel num1 � : " << sizeof(num1) << "bytes" << std::endl;

    return 0;

}
