#include <iostream>
#include <tchar.h>
#include <string>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num {12};
    float flo {123.123};
    char carc {'k'};
    std::string texto {"esse é meu texto"};

    std::printf("\t o numero inteiro que foi inicializado é o : %i \n ", num);
    std::printf("\t o numero float que foi inicializado é o : %2.2f \n ", flo);
    std::printf("\t o caracter que foi inicializado é o : %c \n", carc);
    std::printf("\t o texto que foi inicializado na variavel texto é %s \n", texto.c_str());

    system("pause");
    return 0;
}
