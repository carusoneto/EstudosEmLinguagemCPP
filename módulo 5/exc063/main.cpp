#include <iostream>
#include <tchar.h>

void ImparOuPar(int num);

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num;
    std::cout << "digite um numero qualquer para saber se ele é par ou impar : " << std::endl;
    std:: cin >> num;
    ImparOuPar(num);

    system("pause");
    return 0;
}

void ImparOuPar(int num)
{
    if (num % 2 == 0)
    {
        std::cout << "o numero é par " << std::endl;
    }
    else
    {
        std::cout << "o numero é impar " << std::endl;
    }
}
