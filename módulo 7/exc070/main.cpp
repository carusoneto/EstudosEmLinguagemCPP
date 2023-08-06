#include <iostream>
#include <tchar.h>

void ExibirMenu ();
void ProcessarEscolha(int tipoescolha);
int RetornarEscolha();

int main ()
{
    ExibirMenu();
    system("pause");

    return 0;
}

void ExibirMenu()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int escolha;
    do
    {
        std::cout << "\t CINEMA \n";
        std::cout << "[1] - para meia entrada \n";
        std::cout << "[2] - para inteira \n";
        std::cout << "[3] - para sair \n";
        RetornarEscolha();
        ProcessarEscolha(RetornarEscolha());

    }while(escolha != 3);
}

void ProcessarEscolha(int tipoescolha)
{
    switch(tipoescolha)
        {
            case 1 :
                    std::cout << "meia entrada comprado \n";
            break;

            case 2 :
                    std::cout << "entrada inteira comprado \n";
            break;

            case 3 :
                    std::cout << "saindo do menu \n";
            break;
        }
}

int RetornarEscolha()
{
        int escolha = 0;
        std::cout << "escolha sua opção : " << std::endl;
        std:: cin >> escolha;

        return escolha;
}
