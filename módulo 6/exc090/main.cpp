// mostre um vetor de 10 elementos na tela, seu tamanho em bytes e o seu tamanho de elementos, dentro de uma funcao

#include <iostream>
#include <tchar.h>
#include <array>

void MostrandoElementos(int vet[], int elemento);

int main ()
{
    int vet[]{0,1,2,3,4,5,6,7,8,9},i{0};
    int elemento;

    //sizeof vet; é o tamanho do vetor em bytes
    // sizeof vet / sizeof do tipo do vetor é igual ao tamanho, em numeros de elementos do vetor

    elemento = sizeof vet / sizeof (int);
    // elemento = std::size(vet); seria a forma de dizer o tamanho do vet usando a biblioteca <array>

    MostrandoElementos(vet,elemento);

    std::cout << "-------------------" << std::endl;

    for (i = 0; i < 10; i ++)
    {
        std::cout << vet[i] << std::endl;
    }

    return 0;
}


void MostrandoElementos(int vet[], int elemento)
{
    int i;



    for (i = 0; i < elemento; i++)
    {
        std::cout << vet[i] << std::endl;
    }
}
