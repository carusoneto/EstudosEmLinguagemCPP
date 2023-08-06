#include <iostream>
#include <tchar.h>

void entrada();
void escolha(int a);
int escolha1();

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    entrada();
    system("pause");

    return 0;
}

void entrada()
{
    int op;
    do
    {

            std::cout << "\t **** TICKETS CINEMA **** \n";
            std::cout << "[1] - para meia entrada" << std::endl;
            std::cout << "[2] - para inteira" << std::endl;
            std::cout << "[3] - para sair " << std::endl;
            escolha1();
            escolha(escolha1());
    } while(op != 3);

}

void escolha(int a)
{
    switch(a)
            {
                case 1:
                    std::cout << "entrada meia selecionada" << std::endl;
                break;

                case 2:
                    std::cout << "entrada inteira selecionada" << std::endl;
                break;

                case 3:
                    std::cout << "saindo do menu" << std::endl;
                break;
            }
}

int escolha1()
{
    int op;

    std::cout << "escolha sua opção : ";
    std:: cin >> op;

    return op;
}
