// verificação se um numero é maior do que o outro com o loop
#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num1,num2,maior;
    bool resposta;

    do
    {
        std::cout << "digite um número qualquer : " << "\n";
        std:: cin >> num1;
        std::cout << "digite outro número : " << "\n";
        std:: cin >> num2;

        maior = (num1 > num2)? num1: num2;

        std::cout << "o maior numero é : " << maior << "\n";
        std::cout << "você quer fazer outra verificação ? [1] para sim e [0] para nao : " << "\n";
        std:: cin >> resposta;
        system("cls");
    }

    while(resposta == true);
    system("cls");
    std::cout << "ATÉ LOGO!" << "\n";
    system("pause");
    return 0;
}
