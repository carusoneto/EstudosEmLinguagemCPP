// digite um programa que faca uma avaliação logica usando uma variavel do tipo bool e fazendo uma desvio condicional

#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int hora,cont;
    bool validade;

    cont = 0;
    for (cont = 0; cont < 2; cont++ ) {

    std::cout << " digite qual é a hora do dia " << std::endl;
    std::cin >> hora;

    if (hora > 0 && hora <= 24){
        validade = true;
    } else if (hora > 24 ) {
        validade = false;
    }


    if (validade = 0 && hora > 24){
        std::cout << "o valor digitado não existe" << std::endl;
    }

    if (validade = true && hora > 0 && hora <= 12 ){
        std::cout << "bom dia" << std::endl;
    }
    else if (validade = true && hora > 12 && hora <= 17 ){
        std::cout << "boa tarde" << std::endl;
    }
    else if (validade = true && hora > 17 && hora <= 24){
        std::cout << "boa noite" << std::endl;
    }


    }
    system("pause");
    return 0;
}
