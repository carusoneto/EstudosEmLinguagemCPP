#include <iostream>
#include <tchar.h>

float media (float num1, float num2, float num3)
{
    return (num1+num2+num3) / 3;
}

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int cont;

    for (cont = 0; cont <= 4; cont++)
    {
            float num1,num2,num3;

            std::cout << "digite o primeiro numero : " << std::endl;
            std::cin >> num1;
            std::cout << "digite o segundo numero : " << std::endl;
            std::cin >> num2;
            std::cout << "digite o terceiro numero : " << std::endl;
            std::cin >> num3;

            std::cout << "a media de " << num1 << " e " << num2 << " e " << num3 << " é : " << media(num1,num2,num3) << "\n" << "\n";
    }
    return 0;

}
