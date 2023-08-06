// faça uma matriz 5 x 5 que me mostre na sua diagonal 0, na parte de cima 1 e na parte de baixo - 1

#include <iostream>

int main ()
{
    int i,j;
    int vet[5][5];

        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if (i > j)
                {
                    vet[i][j] = 1;
                }
                else if(i == j)
                {
                    vet[i][j] = 0;
                }
                else if(i < j)
                {
                    vet[i][j] = -1;
                }
            }
        }

        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                std::cout << "  [  " << vet[i][j] << "  ]  ";
            }
            std::cout << "\n";
        }

}
