#include <iostream>

int main ()
{
    int num;

    num = 0;

    while (num <= 50)
    {
        if (num % 2 == 0)
        {
        std::cout << num << "\n";
        }
        else if (num % 2 == 1)
        {
            std::cout << "[" << num << "]" << "\n";
        }
        num++;
    }

    return 0;
}

