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

// n�s estavamos acostumados a passar argumentos para parametros em programa��o estruturada, de uma forma que o argumento est�va
// definido na estrutura da main por ex :
/* int main ()
int num1;

soma(num1);

vai para um parametro na fun��o - int soma(int numero)
