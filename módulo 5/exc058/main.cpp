#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int cont,soma;

    soma = 0;

    for (cont = 0; cont <= 100; cont++)
    {
        std::cout << cont << std::endl;
        soma = soma + cont;
    }
    std::cout << "a soma de todos os numeros � : " << soma << std::endl;
    std::cout << "o endere�o da variavel soma � : " << &soma << std::endl;
    std::cout << "e o tamanho da variavel soma � : " <<  sizeof(soma) << std::endl;
    system("pause");
    return 0;
}
