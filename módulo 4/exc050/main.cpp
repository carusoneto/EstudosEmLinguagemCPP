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
            std::cout << "digite qual opera��o voc� deseja fazer :" << "\n";
            std::cout << "\n [1] - adi��o \n [2] - subtra��o \n [3] - divis�o \n [4] - multiplica��o \n \n";
            std::cin >> operacao;
            switch (operacao)
            {
                case 1:
                    std::cout << "a soma de " << num1 << " + " << num2 << " � : " << num1 + num2 << "\n";
                    break;
                case 2:
                     std::cout << "a subtra��o de " << num1 << " - " << num2 << " � : " << num1 - num2 << "\n";
                    break;
                case 3:
                     std::cout << "a divis�o de " << num1 << " / " << num2 << " � : " << num1 / num2 << "\n";
                    break;
                case 4:
                     std::cout << "a multiplica��o de " << num1 << " * " << num2 << " � : " << num1 * num2 << "\n";
                    break;
                default :
                    std::cout << "op��o n�o valida" << std::endl;
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
