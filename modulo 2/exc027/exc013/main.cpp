#include <iostream>
#include <tchar.h>
#include <iomanip>
int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int NumComputadores, SerialComputadore;
    float numb;
    double numb2;

    NumComputadores = 100;
    SerialComputadore = 1111;
    numb = 54.98f;
    numb2 = 5409809.986543;


    std::cout << "\t \t \t $$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    std::cout << "\t Numcomputadores tem um valor de : " << NumComputadores << " e seu endere�o � : " << &NumComputadores << std::endl;
    std::cout << "\t e o tamanho da variavel NumComputadores he : " << sizeof (NumComputadores) << std::endl;
    std::cout << "\t SerialComputadores tem um valor de : " << SerialComputadore << " e seu endere�o � : " << &SerialComputadore << std::endl;
    std::cout << "\t e o tamanho da variavel SerialComputadores � : " << sizeof (SerialComputadore) << std::endl;
    std::cout << "\t numb tem o valor de : " << numb << " o endere�o de numb eh : " << &numb << std::endl;
    std::cout << "\t o tamanho da variavel numb eh : " << sizeof(numb) << " porque numb eh do tipo float " << std::endl;
    std::cout << "\t numb2 tem o valor de : " << std::setprecision(15) << numb2 << " o endere�o de numb2 eh : " << &numb2 << std::endl;
    std::cout << "\t o tamanho da variavel numb2 eh : " << sizeof(numb2) << " porque numb2 eh do tipo double " << std::endl;
    std::cout << "\t \t \t $$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    system("pause");

    return 0;
}
