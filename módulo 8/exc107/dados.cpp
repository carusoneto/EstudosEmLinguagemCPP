#include <iostream>
#include "dados.h"


double dados::getsaldo(double saldo)
{
    return saldo;
}

double dados::saque(double valor)
{
    if (valor > saldo)
    {
        std::cout << "saldo insuficiente" << std::endl;
        return 10;
    }
    else
    {
        std::cout << "saque realizado com sucesso" << std::endl;
        saldo -= valor;
        std::cout << "o valor atual do seu saldo é : " << std::endl;
        return saldo;
    }
}
