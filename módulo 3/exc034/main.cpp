#include <iostream>
#include <tchar.h>
#include <string>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num {12};

    std::printf("o numero que eu quero mostrar � %i", num);

    return 0;
}
