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
    // acontece que quando instaciamos um objeto, ele aponta para o endere�o da class, logo para " usar " os atributos e metodos
    // que est�o dentro da class n�s temos que desrreferenciar o objeto e nesse caso exite duas formas de fazer isso
    // (*objeto).
    // -> as duas s�o a mesma coisa, s�o utilizadas quando o objeto � instanciado como um ponteiro
    return 0;
}

void menssagem::hellou()
{
    std::cout << "hello word!" << std::endl;
}
void menssagem::ola()
{
    std::cout << "ol� mundo!" << std::endl;
}
