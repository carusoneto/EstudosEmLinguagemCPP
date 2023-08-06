#include <iostream>

class numero
{
    private:
    int num1{8},num2{9};

    public:
        int soma();
};

int main()
{
    numero *opcoesaritimeticas;
    std::cout << opcoesaritimeticas->soma();

    return 0;
}

int numero::soma()
{
    return num1 + num2;
}
