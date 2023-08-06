#include <iostream>
#include <string>
#include "conta.h"

int main ()
{
    fala *saldacao = new fala();
    saldacao->boanoite("lian");
    saldacao->boanoite("lucas");
    saldacao->boanoite("neto");
    return 0;
}

// nós estavamos acostumados a passar argumentos para parametros em programação estruturada, de uma forma que o argumento estáva
// definido na estrutura da main por ex :
/* int main ()
int num1;

soma(num1);

vai para um parametro na função - int soma(int numero)
