// verifica��o se um numero � maior do que o outro com o loop
#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int num1,num2,maior;
    bool resposta;

    do
    {
        std::cout << "digite um n�mero qualquer : " << "\n";
        std:: cin >> num1;
        std::cout << "digite outro n�mero : " << "\n";
        std:: cin >> num2;

        maior = (num1 > num2)? num1: num2;

        std::cout << "o maior numero � : " << maior << "\n";
        std::cout << "voc� quer fazer outra verifica��o ? [1] para sim e [0] para nao : " << "\n";
        std:: cin >> resposta;
        system("cls");
    }

    while(resposta == true);
    system("cls");
    std::cout << "AT� LOGO!" << "\n";
    system("pause");
    return 0;
}
