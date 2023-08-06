#include <iostream>

int main ()
{
    int num1{20},num2{21};

    num1 = ++num2;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;

    num1 = num2++;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;

    return 0;
}
