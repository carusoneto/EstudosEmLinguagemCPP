#include <iostream>
#include "sta.h"

void contagem ()
{
    int i;
    i = 0;
    for(i = 0; i <= 5; i++)
    {
        std::cout << contadora() << std::endl;
    }
}

int contadora()
{
    static int contar = 0;
    contar++;

    return contar;
}
