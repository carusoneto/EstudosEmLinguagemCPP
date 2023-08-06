#include <iostream>

int main ()
{
    int Emeias,inteiras,entrada;
    char resp;

    Emeias = 0;
    inteiras = 0;

    do
    {
        std:: cout << "\t CINE CARUSO" << "\n";
        std:: cout << "carrinho -> meias [ " << Emeias << " ] inteiras [ " << inteiras << " ] " << "\n";
        std:: cout << "selecione o tipo de entrada : " << "\n";
        std:: cout << " [1] - entrada meia" << "\n";
        std:: cout << " [2] - entrada inteira" << "\n";
        std:: cin >> entrada;
        if (entrada == 1 )
        {
            std::cout << "entrada meia selecionada" << "\n";
            Emeias = ++Emeias;
        }
        else if (entrada == 2)
        {
            std::cout << "entrada inteira selecionada" << "\n";
            inteiras = ++inteiras;
        }
        std::cout << "deseja selecionar outra entrada [s] ou [n] : " << "\n";
        std::cin >> resp;
        system("cls");


    }
    while(resp != 'n');
}
