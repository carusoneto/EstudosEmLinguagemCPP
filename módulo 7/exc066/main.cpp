#include <iostream>

void entrada ();


int main ()
{


    system("pause");

    return 0;
}

void entrada()
{
        do
    {
        system("cls");
         std::cout << "\t CINE CARUSO \n";

        std::cout << "selecione o seu tipo de entrada : " << std::endl;
        std::cout << "[1] - meia entrada \n";
        std::cout << "[2] - entrada inteira \n";
        std:: cin >> op;
            (op == 1)?std::cout << "meia entrada selecionada \n":std::cout << "entrada inteira selecionada \n";
            std::cout << "voce deseja comprar mais entradas [1] sim [2] nao : " << std::endl;
            std:: cin >> resp;
            validacao = (resp == 1)?true:false;
            if (resp != 1 && resp != 2)
            {
                do
                {
                std::cout << "resposta invalida \n digite a resposta correspondente : " << std::endl;
                std:: cout << "[1] - sim e [2] - nao " << std::endl;
                std:: cin >> op;
                validacao = (op == 1)?true:false;
                }while(op !=1 && op != 2);
            }
    }while(validacao);
}
