#include <iostream>

int contagem()
{
    static int num = 0;
    num++;
    return num;
}

void multe (int x = 5, int y = 6, int z = 7)
{
    x *= 10;
    y *= 10;
    z *= 10;

    std::cout << x << "\n" << y << "\n" << z << std::endl;
}

int main ()
{
    int i;

    for (i=0; i <= 4; i++)
    {
        std::cout << contagem() << std::endl;
    }

    multe();

    system("pause");
    return 0;
}
