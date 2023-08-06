#include <iostream>
#include <tchar.h>

int main ()
{
	int numero1,numero2,maior;
	bool validacao;
	int resposta;

	do
	{
	    _tsetlocale(LC_ALL,_T("portuguese"));
		system("cls");
		std::cout << "digite o primeiro numero : " << std::endl;
		std:: cin >> numero1;
		std::cout << "digite o segundo numero : " << std::endl;
		std:: cin >> numero2;

		maior = (numero1 > numero2)? numero1: numero2;

		std::cout << "o maior numero digitado é o : " << maior << std::endl;
		std::cout << "você deseja fazer outra verificação de número [1] - sim [2] - nao : " << "\n";
		std:: cin >> resposta;
		if (resposta == 1 || resposta == 2)
		{
			validacao = (resposta == 1)?true:false;
		}
		else
		{
			do
			{

				std::cout << "resposta invalida \n digite a resposta certa \n";
				std::cout << "[1] - para sim [2] - para false \n";
				std:: cin >> resposta;
				validacao = (resposta == 1)?true:false;

			}while(resposta != 1 && resposta != 2);
		}
	}while(validacao == true);

	system("pause");

	return 0;
}

