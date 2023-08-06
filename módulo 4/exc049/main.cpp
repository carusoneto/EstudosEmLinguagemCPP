#include <iostream>
#include <tchar.h>
#include <string>

void entrada ()
{
    std::cout << "digite sua senha : " << std::endl;
}

int main ()
{
    std:: string SenhaCorreta = "cmaismais";
    std:: string Senha;
    bool Validacao;
    int cont;

    for (cont = 0; cont <= 2; cont++)
    {
            entrada();
            std::cin >> Senha;
            if (SenhaCorreta == Senha)
            {
                std::cout << "Senha Correta" << std::endl;
                system("cls");
                cont = 2;
                Validacao = 1;
            }
            else if (SenhaCorreta != Senha && cont == 0)
            {
                std::cout << "Senha Incorreta" << std::endl;
                std::cout << "primeira tentativa" << std::endl;
                system("cls");
                Validacao = 0;
            }
            else if (SenhaCorreta != Senha && cont == 1)
            {
                std::cout << "Senha Incorreta" << std::endl;
                system("cls");
                std::cout << "segunda tentativa" << std::endl;
                Validacao = 0;
            }
            else if (SenhaCorreta != Senha && cont == 2)
            {
                std::cout << "Senha Incorreta" << std::endl;
                system("cls");
                std::cout << "terceira tentativa" << std::endl;
                Validacao = 0;
            }
    }

    (Validacao == 1)? std::cout << "continue navegando" : std::cout <<"conta bloqueada";

    return 0;
}
