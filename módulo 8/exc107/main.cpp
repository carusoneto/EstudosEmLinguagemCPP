#include <iostream>
#include "dados.h"
#include <tchar.h>
int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    dados criarconta;
    criarconta.getsaldo(97765.654);
    std::cout << criarconta.saque(350.90);

    return 0;
}
