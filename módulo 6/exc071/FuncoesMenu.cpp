#include <iostream>
#include "FuncoesMenu.h"

void menu ()
{
	int op;
	do
	{
		std::cout << "CINEMA" << std::endl;
		std::cout << "[1] - para entrada meia" << std::endl;
		std::cout << "[2] - para entrada inteira" << std::endl;
		std::cout << "[3] - para sair do menu" << std::endl;
	}while(escolha(entrada()) != 3);

}

int entrada ()
{
	int op;

	std::cout << "digite qual a sua entrada" << std::endl;
	std:: cin >> op;

	return op;
}

int escolha(int op)
{
	switch (op)
		{
			case 1:
			std::cout << "entrada meia selecionada"  << std::endl;
			break;

			case 2:
			std::cout << "entrada inteira selecionada" << std::endl;
			break;

			case 3:
			std::cout << "saindo do menu" << std::endl;
			break;

		}
	return op;
}
