#include <iostream>

int main ()
{
    int resp;


    std:: cout << "\t CINE CARUSO" << "\n";
    std:: cout << "selecione o tipo de entrada : " << "\n";
    do
    {
        std:: cout << "[1] - meia entrada " << "\n";
        std:: cout << "[2] - inteira entrada " << "\n";
        std:: cout << "[3] - sair " << "\n";
        std:: cin >> resp;

        switch (resp)
        {
            case 1:
                    std::cout << "entrada meia selecionadada" << "\n";
                    break;
            case 2:
                    std::cout << "entrada inteira selecionada" << "\n";
                    break;
            case 3:
                std::cout << "saindo ..." << "\n";
                break;
        }
    }
    while(resp != 3);

    system("pause");

    return 0;
}
