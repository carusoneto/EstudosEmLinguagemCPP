#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num {1}, num2 {2};

    std::cout << "o valor de num é : " << num << std::endl;
    std::cout << "e o valor de num2 é : " << num2 << "\n" << std::endl;

    std::cout << "agora eu vou fazer com que a variavel num receba a variavel num2 + 1 " << std::endl;
    num = num2 + 1;
    std::cout << "esse é o valor de num : "<< num << std::endl;
    std::cout << "esse é o valor de num2 : " << num2 << std::endl;
    std::printf("percebemos que o valor de num2 ainda é o mesmo \n \n ");

    std::cout << "agora eu vou fazer um incremento pré fixado na variavel num2 e vou fazer com que num receba ela " << std::endl;
    num = ++num2;
    std::cout << "o valor de num é : " << num << std::endl;
    std::cout << "o valor de num2 é " << num2 << std::endl;

    num = num2++;
    std::cout << num << std::endl;
    std::cout << num << std::endl;


    return 0;
}
