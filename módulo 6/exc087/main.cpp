#include <iostream>


int main ()
{
	int elementos{0},i, menor{1000}, maior{0};
	int signed vetor[20]; // aqui eu to dizendo pro meu algoritimo que o meu vetor s� vai ter 20 espa�os na memoria RAM
	// por�m o eu usuario n�o sabe

	std::cout << "quantos elementos voce quer ter ? o n�mero maior de elementos � 20" << std::endl;
	std:: cin >> elementos;
	if (elementos > 20)
	{
		do
		{
			std::cout << "o valor digitado ultrapassa o valor maiorimo \n digite novamente! " << std::endl;
			std:: cin >> elementos;
			system("cls");

		}while(elementos > 20);
	}
	for (i = 0; i < elementos; i++)
	{
		std::cout << "digite o " << i + 1 << "� elemento : " << std::endl;
		std:: cin >> vetor[i];
	}

    maior = 0;
    menor = 1000;

	for (i = 0; i < elementos; i++);
	{
		if (vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else if (vetor[i] < menor)
		{
			menor = vetor[i];
		}
	}


	std::cout << "o maior valor digitado � : "<< maior << std::endl;
	std::cout << "o menor valor digitado � : "<< menor << std::endl;

	system("pause");
	return 0;

}
