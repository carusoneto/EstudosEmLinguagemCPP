#include <iostream>
#include <tchar.h>
#include <string>

class menssagem
{
    private:

    public:
        void hellou();
        void ola();
};

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    menssagem *saldacao;
    saldacao->hellou();
    saldacao->ola();
    // acontece que quando instaciamos um objeto, ele aponta para o endereço da class, logo para " usar " os atributos e metodos
    // que estão dentro da class nós temos que desrreferenciar o objeto e nesse caso exite duas formas de fazer isso
    // (*objeto).
    // -> as duas são a mesma coisa, são utilizadas quando o objeto é instanciado como um ponteiro
    return 0;
}

void menssagem::hellou()
{
    std::cout << "hello word!" << std::endl;
}
void menssagem::ola()
{
    std::cout << "olá mundo!" << std::endl;
}
