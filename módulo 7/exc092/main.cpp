// mostre um array de traz para frente
#include <iostream>

int main ()
{
    int vet[]{0,1,2,3,4,5,6,7,8,9},i{0};

    for (i = 0; i < 10; i++)
    {
        std::cout << vet[i] << "\n";
    }

    std::cout << "agora vamos contar de traz para frente : " << std::endl;

    for (i = 10; i > 0; i--)
    {
        std::cout << vet[i] << "\n";
    }


    system("pause");
    return 0;
}
