#include <iostream>
#include <string>

int main ()
{
    int num = 1;
    float num1 = 12.32;
    double num2 = 12.3123;
    char letra = 'a';


    std::cout << "o tamanho da variavel " << num << " � : " << sizeof(num) << std::endl;
    std::cout << "e o endere�o que essa variavel est� alocada � : " << &num << "\n";
    std::cout << "o tamanho da variavel " << num1 << " � : " << sizeof(num1) << std::endl;
    std::cout << "o tamanho da variavel " << num2 << " � : " << sizeof(num2) << std::endl;
    std::cout << "o tamanho da variavel " << letra << " � : " << sizeof(letra) << std::endl;
    std::cout << "e o endere�o que essa variavel est� alocada � : " << &letra << "\n";


    system("pause");
    return 0;
}
