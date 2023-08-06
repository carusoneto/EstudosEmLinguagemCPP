// faca um progama que ultilize os tres tipos de arquivo, faça uma contagem, uma função que tenha passagem de parametros por
// referencia e ponteiro

#include <iostream>
#include <tchar.h>
#include "heder.h"

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;



    contagem();
    std::cout << "escolha um número da contagem a cima para ser atribuido a num1 : " << std::endl;
    std:: cin >> num1;
    std::cout << "escolha um número da contagem a cima para ser atribuido a num2 : " << std::endl;
    std:: cin >> num2;

    troca(&num1,&num2);

    std::cout << "o valor agora da variavel num1 é : " << num1 << std::endl;
    std::cout << "o valor agora da variavel num2 é : " << num2 << std::endl;

    system("pause");
    return 0;
}
