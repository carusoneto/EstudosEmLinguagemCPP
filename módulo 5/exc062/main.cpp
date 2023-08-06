#include <iostream>

float soma (float num1, float num2);

int main ()
{
    float num1,num2, resultado;

    std::cout << "digite um numero : " << "\n";
    std:: cin >> num1;
    std::cout << "digite outro numero : " << "\n";
    std:: cin >> num2;
    std::cout << soma(num1,num2) << "\n";

    resultado = soma(num1,num2);
    std::cout << resultado << "\n";
    resultado = 150 + (soma(num1,15));
    std::cout << resultado;
}

float soma (float num1, float num2)
{
    return num1 + num2;
}
