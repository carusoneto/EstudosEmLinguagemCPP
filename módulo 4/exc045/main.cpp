#include <iostream>
#include <tchar.h>
#include <string>


int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    bool bAcesso;
    std::string SenhaDeAcesso {"cmaismais"};
    std::string DigiteSenha;

    std::cout << "digite a senha de acesso : " << "\n";
    std::cin >> DigiteSenha;

    if (DigiteSenha == SenhaDeAcesso)
    {
        std::cout << "\nacesso permitido" << std::endl;
        bAcesso = true;
        system("pause");
    }
    else
    {
        std::cout << "\nacesso negado" << std::endl;
        bAcesso = false;
        system("pause");
        exit(0);
    }

    return 0;
}
