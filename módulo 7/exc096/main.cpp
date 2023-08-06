#include <iostream>
#include <vector>
#include <string>

int main ()
{
    std::string nome;
    std::vector <int> vet = {8,3,2,1,0};
    int tamanho;
    tamanho = sizeof(vet) / sizeof(int);
    std::cout << tamanho << std::endl;
    std::cout << "====================== \n";
    for (int v : vet)
    {
        std::cout << v << std::endl;
    }

    vet.push_back(8);
    std::cout << "====================== \n";
    std::cout << tamanho << std::endl;
    std::cout << "====================== \n";
    for (int v : vet)
    {
        std::cout << v << std::endl;
    }
    std::cout << "====================== \n";
    std::cout << tamanho << std::endl;


    return 0;

}
