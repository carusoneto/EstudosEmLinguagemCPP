#include <iostream>

int soma (int num1, int num2)
{
    return num1 + num2;
}

int main ()
{
    int num1,num2;

    std::cin >> num1;
    std::cin >> num2;

    std::cout << soma(num1,num2) << std::endl;

    return 0;
}
