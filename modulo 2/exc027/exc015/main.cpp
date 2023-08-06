#include <iostream>
#include <tchar.h>
#include <iomanip>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    char caracter;
    double num;

    caracter = 'c';
    num = 1234.30219;

    std::cout << caracter << std::endl;
    std::cout << "o tamanho da variavel caracter é : " << sizeof(caracter)<< "bit que são 8 bytes" << std::endl;
    std::cout << "agora eu quero mostrar o endereção da variavel caracter : " << (void*)&caracter << std::endl;
    std::cout << std::setprecision(15)  << num << std::endl;
    std::cout << "agora eu quero mostrar o tamanho de num : " << sizeof(num) << std::endl;
    std::cout << "e agora eu quero mostrar o endere�o de num : " << &num << std::endl;
    system("pause");

    return 0;

}
