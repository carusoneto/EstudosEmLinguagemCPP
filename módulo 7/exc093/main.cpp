// faça uma matriz identidade de 3 x 3
#include <iostream>

int main ()
{
    int vet[500][500],i{0},j{0};

    for(i = 0 ; i < 500; i++)
    {
        for(j = 0 ; j < 500; j++)
        {
            if(i == j)
                vet[i][j] = 0;
            else if (i < j)
                vet[i][j] = 0;
            else if (i > j)
                vet[i][j] = -1;
        }
    }

    for(i = 0 ; i < 500; i++)
    {
        for(j = 0 ; j < 500; j++)
        {
            std::cout << " [ " << vet[i][j] << " ] ";
        }
        std::cout << "\n";
    }

    system("pause");
    return 0;
}
