#include <iostream>

int main ()
{
    int num1,num2;
    bool comparacao;

    std::cout << "digite o primeiro numero : " << std::endl;
    std::cin >> num1;
    std::cout << "digite o segundo numero : " << std::endl;
    std::cin >> num2;

    comparacao = num1 == num2;
    std::cout << comparacao << std::endl;
    comparacao = num1 != num2;
    std::cout << comparacao << std::endl;

    return 0;
}


