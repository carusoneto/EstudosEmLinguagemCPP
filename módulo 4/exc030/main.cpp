#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num,cont;
    for (cont = 0; cont < 4; cont++)
    {
        std::cout << "digite um numero para saber se ele � par ou impar : " << std::endl;
        std::cin >> num;
        if (num % 2 == 0)
        {
            std::cout << "o numero � par" << std::endl;
        }
        else if (num % 2 == 1)
        {
            std::cout << "o numero � impar" << std::endl;
        }
    }
    system("pause");

    return 0;
}
