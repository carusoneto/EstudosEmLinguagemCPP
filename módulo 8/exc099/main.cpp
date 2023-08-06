// faça um programa que tenha uma função que passe tres parametros e os multiplique por 2;
#include <iostream>

void duplicando(int x,int y,int z)
{
    int i{0};
    static int ar[3];
    ar[0] = x;
    ar[1] = y;
    ar[2] = z;

    for (i = 0; i < 3; i++)
    {
        ar[i] = ar[i] * 2;
    }

    for (i = 0; i < 3; i++)
    {
        std::cout << ar[i] << std::endl;
    }


}

int main ()
{
    int x,y,z;
    x = 5;
    y = 9;
    z = 3;
    duplicando(x,y,z);

    return 0;
}
