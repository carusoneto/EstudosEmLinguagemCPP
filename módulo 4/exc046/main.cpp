#include <iostream>
#include <string>


int main ()
{
    bool Validacao;
    std:: string SenhaValida = "cmaismais";
    std:: string Senha;
    int cont;



    for (cont = 1; cont <= 3; cont++)
    {
            std::cout << "digite a senha : " << std::endl;
            std::cin >> Senha;

            if (Senha == SenhaValida)
            {
                Validacao = true;
                system("cls");
                std::cout << "senha correta" << std::endl;

                break;
            }
            else
            {

                Validacao = false;
                system("cls");
                std::cout << "senha incorreta" << std::endl;

            }

    }
            (validacao == 1) ? "continue navegando" : "CONTA BLOQUEADA";
}
