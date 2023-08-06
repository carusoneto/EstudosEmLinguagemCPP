// mostre um vetor de 10 elementos na tela, seu tamanho em bytes e o se tamanho de elementos, dentro de uma funcao
#include <iostream>
#include <tchar.h>
#include <array>

void MostrandoArray(int a[], int b);

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int vet[]{0,1,2,3,4,5,6,7,8},i{0},tamanho{0};

    std::cout << "o tamanho do vetor vet é : " << sizeof(vet) << std::endl;
    std::cout << "só que o tamanho mostrado a cima é o tamanho do vetor em bytes, sendo calculado todos os bytes \n";
    std::cout << "de todos os espaço que o array está ocupando " << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "agora eu quero mostrar o tamanho em quantidade de elementos que o vetor vet tem " << std::endl;
    std::cout << "que é : " << sizeof(vet) / sizeof(int) << std::endl;
    std::cout << "aqui para decobrirmos o número de elementos do array, nós pegamos o tamanho do array em bytes " << std::endl;
    std::cout << "e dividimos pelo o tamanho do tipo do array, assim temos a quantidade de elementos do array " << std::endl;

    tamanho = sizeof(vet) / sizeof(int);

    std::cout << "e agora eu estou chamando uma função para mostrar o valor dos elementos : " << std::endl;

    MostrandoArray(vet,tamanho);

    std::cout << "agora eu quero mostrar o array de traz para frente : " << std::endl;
    std::cout << "para mostrar o valor do array de traz para frente, precisamos farrer o vetor do ultimo elemento" << std::endl;
    std::cout << "para o primeiro, dessa maneira : " << std::endl;

    i = tamanho;

    do
    {
        std::cout << vet[i] << std::endl;
        i--;
    }while(i > 0);


    return 0;
}

void MostrandoArray(int a[], int b)
{
    int i{0};

    for(i = 0; i < b ; i++)
    {
        std::cout << a[i] << std::endl;
    }
}
