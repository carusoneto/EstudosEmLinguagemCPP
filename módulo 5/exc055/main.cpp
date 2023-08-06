#include <iostream>
#include <tchar.h>

void entrada (int meias, int inteiras)
{
            std::cout << "\t CINE CARUSO" << "\n";
            std::cout << "carrinho -> meias [" << meias << "] inteiras [" << inteiras << "] " << "\n";
}

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));

    int meias,inteiras,opcao,totalEntradas;
    float Vmeias, Vinteiras,TotalPagar;
    char resp, respfinal;
    bool validacao;

    meias = 0;
    inteiras = 0;
    Vmeias = 20.25;
    Vinteiras = 40.5;


    do
    {
            entrada(meias,inteiras);
            std::cout << "o valor da entrada meia é : " << Vmeias << "$ e o valor da entrada inteira é : " << Vinteiras << "$ \n";
            std::cout << "selecione suas entradas :" << "\n";
            std::cout << "[1] - meia entrada" << "\n";
            std::cout << "[2] - inteira entrada" << "\n";
            std:: cin >> opcao;
            if (opcao == 1)
            {
                std::cout << "MEIA entrada selecionada" << "\n";
                meias = ++meias;
                validacao = 1;
            }
            else if (opcao == 2)
            {
                std::cout << "INTEIRA entrada selecionada" << "\n";
                inteiras = ++inteiras;
                validacao = 1;
            }
            std:: cout << "voce deseja continuar comprando [s] ou [n]" << "\n";
            std::cin >> resp;
            system("cls");
    }
    while(resp != 'n');

            totalEntradas = meias + inteiras;
            TotalPagar = (meias * Vmeias) + (inteiras * Vinteiras);

            entrada(meias,inteiras);
            std::cout << "o total de entradas é : " << totalEntradas << "\n";
            std::cout << "e o valor total de pagamento é : " << TotalPagar << "\n";
            std::cout << "confirmar pagamento : [s] ou [n] " << "\n";
            std:: cin >> respfinal;
            if (respfinal == 's')
            {
                std::cout << "aproveite o filme" << "\n";
            }
            else
            {
                std::cout << "refaça o pedido" << "\n";
            }

    system("pause");
    return 0;
}
