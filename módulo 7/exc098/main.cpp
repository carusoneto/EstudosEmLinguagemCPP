// me faça um programa que passe o valor de uma variavel por referencia e altere o valor dela
#include <iostream>

void duplicandovetor(int vet[], int tamanho);

int main ()
{
    int vet[]{7,3,6},i{0},tamanho;
    int *ptr;

    ptr = vet; // é a mesma coisa de eu dize ptr = &vet[0];
    tamanho = sizeof(vet) / sizeof(int);
    duplicandovetor(vet,tamanho);
    for(i = 0; i < tamanho; i++)
    {
        std::cout << vet[i] << std::endl;
    }

    for (i = 0; i < tamanho ; i++)
    {
        std::cout << *(ptr + i) << std::endl;
    }

    std::cout << *(ptr + 1) << std::endl;

    return 0;
}

void duplicandovetor(int vet[], int tamanho)
{
    int i{0};

        for (i = 0; i < tamanho; i++)
        {
            vet[i] = vet[i] * 2;
        }
}
