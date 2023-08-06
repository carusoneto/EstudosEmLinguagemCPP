#include <iostream>


int main ()
{
    int vet[]{20},i{0},elementos;

    std::cout << "digite quantos espaços voce deseja ter em sua contagem : " << std::endl;
    std:: cin >> elementos;

    for (i = 0 ; i < elementos ; i++)
    {
        std::cout << "digite o elemento " << i+1 << std::endl;
        std:: cin >> vet[i];
    }

    system("pause");
    return 0;
}
