#include <iostream>
#include <string>


int main ()
{
    string nome ;
    nome = "NOME";
    string *ptr = &nome;

    std::cout << nome << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;


    return 0;
}
