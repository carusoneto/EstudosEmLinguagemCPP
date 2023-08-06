#include <iostream>
#include <string>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    float num1,num2;
    int operacao;
    char resp;

    do
    {
            std::cout << " \t FAZEDORA DE CONTAS" << "\n";
            std::cout << "digite um numero : ";
            std::cin >> num1;
            std::cout << "digite outro numero : ";
            std::cin >> num2;
            std::cout << "digite qual operação você deseja fazer :" << "\n";
            std::cout << "\n [1] - adição \n [2] - subtração \n [3] - divisão \n [4] - multiplicação \n \n";
            std::cin >> operacao;
            switch (operacao)
            {
                case 1:
                    std::cout << "a soma de " << num1 << " + " << num2 << " é : " << num1 + num2 << "\n";
                    break;
                case 2:
                     std::cout << "a subtração de " << num1 << " - " << num2 << " é : " << num1 - num2 << "\n";
                    break;
                case 3:
                     std::cout << "a divisão de " << num1 << " / " << num2 << " é : " << num1 / num2 << "\n";
                    break;
                case 4:
                     std::cout << "a multiplicação de " << num1 << " * " << num2 << " é : " << num1 * num2 << "\n";
                    break;
                default :
                    std::cout << "opção não valida" << std::endl;
                    break;
            }
            std::cout << "voce quer continuar a fazer contas [s] ou [n] :" << "\n";
            std::cin >> resp;
            system("cls");
    }
    while (resp != 'n');
    system("pause");
    return 0;
}
