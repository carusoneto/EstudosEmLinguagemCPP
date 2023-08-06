#include <iostream>


int main ()
{
    int cont ;


    for (cont = 1 ; cont <= 10; cont++)
    {
        std::cout << cont << "\n" << std::endl;
    }

    for (cont = 0 ; cont <= 10; ++cont)
    {
        std::cout << cont << std::endl;
    }
}
