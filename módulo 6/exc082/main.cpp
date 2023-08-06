#include <iostream>
#include <tchar.h>

void trocando (int& num1, int& num2);
int soma (int num1, int num2);


int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2;

    std::cout << "digite o primeiro numero : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite o outro numero : " << std::endl;
    std:: cin >> num2;
    std::cout << "o valor dos números antes de chamar a funcção trocando são, num1 com : " << num1 << " e num2 : " << num2 << "\n";
    std::cout << "agora vamos chamar a função trocando e ver o resultado : \n ";
    trocando(num1,num2);
    std::cout << num1 << "\n" << num2 << "\n";



    system("pause");
    return 0;
}

void trocando (int& num1, int& num2)
{
    int ax {num1};

    num1 = num2;
    num2 = ax;
    std::cout << "------------------------------------------------- \n";
    std::cout << "agora esse é o valor de num1 : " << num1 << "\n";
    std::cout << "agora esse é o valor de num2 : " << num2 << "\n";
    std::cout << "-------------------------------------------------- \n";
}

int soma (int num1, int num2)
{
    return num1 + num2;
}
