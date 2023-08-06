#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int numero1,numero2,maior;
    char resposta;
    bool validacao;

    do
    {
        system("cls");
        std::cout << "\t QUEM É O MAIOR ???"<< std::endl;
        std::cout << "digite o primeiro numero : ";
        std:: cin >> numero1;
        std::cout << "digite  segundo numero : ";
        std:: cin >> numero2;
        maior = (numero1 > numero2)?numero1:numero2;
        std::cout << "o maior numero é : " << maior << std::endl;
        std::cout << "voce deseja fazer outra comparação [s] - para sim [n] - para não" << std::endl;
        std:: cin >> resposta;
        if (resposta == 's' || resposta == 'n')
        {
            validacao = (resposta == 's')?true:false;
        }
        else
        {
            do
            {
                std::cout << "resposta invalida \n responda a pergunta [s] - para sim [n] - para nao : " << std::endl;
                std:: cin >> resposta;
                validacao = (resposta == 's')?true:false;
            }while (resposta !='s' && resposta!='n');
        }
    } while (validacao == true);

    system("pause");
    return 0;
}
