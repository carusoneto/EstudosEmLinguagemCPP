#include <iostream>


int main ()
{
    int num[10]{0};
    int i,maior,menor;

    maior = 0;
    menor = 1000;

    for (i = 0; i < 10; i++)
    {
            std::cout << "digite o " << i + 1 << " numero : " << std::endl;
            std:: cin >> num[i];
            if (num[i] > maior)
            {
                maior = num[i];
            }
            else if (num[i] < menor)
            {
                menor = num[i];
            }

    }

    std::cout << "o maior numero digitado foi : " << maior << std::endl;
    std::cout << "o menor numero digitado foi : " << menor << std::endl;

    system("pause");
    return 0;


}
