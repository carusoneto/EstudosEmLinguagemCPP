#include <iostream>
#include <tchar.h>

int BoasVindas(int num1, int num2)
{
    return (num1 + num2);
}
int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;
    num1 = 7;
    num2 = 12093;


    std::cout << " a soma de " << num1 << " e " << num2 << " � : " << BoasVindas(num1,num2) << std::endl;

    std::cout << "o jogo continua " << std::endl;

    num1 = 31234;
    num2 = 123;

    std::cout << "agora a soma � outra, o valor de num1 � : " << num1 << " e o de num2 � : " << num2 << " e sua soma � : " <<
    BoasVindas(num1,num2) << std::endl;
    system("pause");

    return 0;
}
