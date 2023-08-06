#include <iostream>


float soma(float num1, float num2)
{
    return num1 + num2;
}

int main ()
{
    float num1,num2;
    std::cout << "digite um numero : " << "\n";
    std:: cin >> num1;
    std::cout << "digite outro numero : " << "\n";
    std:: cin >> num2;

    soma(num1,num2);

    std::cout << soma(num1,num2) << std::endl;

    system("pause");
    return 0;
}
