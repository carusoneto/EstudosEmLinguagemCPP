#include <iostream>

class numero
{
    private:
        int num1{8},num2{10};
    public:
        int soma();
};

int main()
{

    numero *opcoesaritimeticas = new numero();
    std::cout << opcoesaritimeticas ->soma();


    return 0;
}

int numero::soma()
{
    return num1 + num2;
}
