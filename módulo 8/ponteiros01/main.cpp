#include <iostream>
#include <string>

int main ()
{
    int num = 1;
    float num1 = 12.32;
    double num2 = 12.3123;
    char letra = 'a';


    std::cout << "o tamanho da variavel " << num << " é : " << sizeof(num) << std::endl;
    std::cout << "e o endereço que essa variavel está alocada é : " << &num << "\n";
    std::cout << "o tamanho da variavel " << num1 << " é : " << sizeof(num1) << std::endl;
    std::cout << "o tamanho da variavel " << num2 << " é : " << sizeof(num2) << std::endl;
    std::cout << "o tamanho da variavel " << letra << " é : " << sizeof(letra) << std::endl;
    std::cout << "e o endereço que essa variavel está alocada é : " << &letra << "\n";


    system("pause");
    return 0;
}
