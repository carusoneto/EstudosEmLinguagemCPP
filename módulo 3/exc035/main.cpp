#include <iostream>
#include <tchar.h>
#include <string>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num {12};
    float flo {123.123};
    char carc {'k'};
    std::string texto {"esse � meu texto"};

    std::printf("\t o numero inteiro que foi inicializado � o : %i \n ", num);
    std::printf("\t o numero float que foi inicializado � o : %2.2f \n ", flo);
    std::printf("\t o caracter que foi inicializado � o : %c \n", carc);
    std::printf("\t o texto que foi inicializado na variavel texto � %s \n", texto.c_str());

    system("pause");
    return 0;
}
