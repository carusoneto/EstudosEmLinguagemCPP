#include <iostream>
#include <tchar.h>

float media (float num1, float num2)
{
    return (num1 + num2 ) / 2;
}

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    float num1,num2;

    std::cout << "digite a primeira nota do aluno : " << std::endl;
    std::cin >> num1;
    std::cout << "digite a segunda nota do aluno : " << std::endl;
    std::cin >> num2;

    std::cout << "a media do aluno é " << media(num1,num2) << std::endl;

    system("pause");

    return 0;
}
