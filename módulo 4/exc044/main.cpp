#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    bool FezSol, CarroPronto,SalarioDepositado;

    FezSol = 0;
    CarroPronto = 0;
    SalarioDepositado = 1;

    if (FezSol||CarroPronto&&SalarioDepositado)
    {
        std::cout << "condição verdadeira" << "\n";
    }

    return 0;
}
