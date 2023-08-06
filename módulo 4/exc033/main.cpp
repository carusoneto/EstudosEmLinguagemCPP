#include <iostream>


int main ()
{
    int num ;
    bool resultadologico;

    std::cout << "digite um numero : " << std::endl;
    std::cin >> num;

    // resultadologico vai receber o valor logico da operação de numero e 100
    resultadologico = ( num > 100 ) && ( num != 0);

    std::cout << resultadologico << std::endl;

    if (resultadologico == 1)
    {
        std::cout << "true" << "\n";
    }
    else if ( resultadologico == 0)
    {
        std::cout << "false" << "\n";
    }
    system("pause");

    return 0;
}
