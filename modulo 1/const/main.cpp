#include <iostream>

int soma(int a = 5, int b = 6)
{
    return a + b;
}

int main ()
{
    std::cout << soma() << std::endl;

    return 0;
}


