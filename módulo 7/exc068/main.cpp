#include <iostream>


void menu();
int soma(int a, int b);

int main ()
{
    menu();

    system("pause");

    return 0;
}

void menu()
{
    int num1,num2;

    std::cout << "digite um numero : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro numero : " << std::endl;
    std:: cin >> num2;

    std::cout << soma(num1,num2) << std::endl;
}

int soma (int a, int b)
{
    return a + b;
}
