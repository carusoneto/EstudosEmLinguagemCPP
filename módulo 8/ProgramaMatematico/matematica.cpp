#include <iostream>
#include "matematica.h"
#include <tchar.h>
#include <math.h>

void entrada()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2,escolha;

    std::cout << "digite um numero : " << std::endl;
    std:: cin >> num1;
    std::cout << "digite outro numero : " << std::endl;
    std:: cin >> num2;
    ope(num1,num2);
    switch(ope(num1,num2))
    {
        case 1:
            std::cout << "a soma entre " << num1 << " e " << num2 << " � : " << soma(num1,num2) << std::endl;
        break;

        case 2:
            std::cout << "a subtra��o entre " << num1 << " e " << num2 << " � : " << sub(num1,num2) << std::endl;
        break;

        case 3:
            std::cout << "a divis�o entre " << num1 << " e " << num2 << " � : " << dive(num1,num2) << std::endl;
        break;

        case 4:
            std::cout << "a multiplica��o entre " << num1 << " e " << num2 << " � : " << multi(num1,num2) << std::endl;
        break;

        case 5:
            std::cout << "a pot�ncia de " << num1 << " sob " << num2 << " � : " << pow(num1,num2) << std::endl;
        break;

        case 6:
            std::cout << "a pot�ncia de " << num2 << " sob " << num1 << " � : " << pow(num2,num1) << std::endl;
        case 7:
            std::cout << "a raiz quadrada de " << num1 << sqrt(num1) << std::endl;
        break;

        case 8:
            std::cout << "a raiz quadrada de " << num2 << sqrt(num2) << std::endl;
        break;

        default:
            std::cout << "op��o invalidada" << std::endl;
        break;
    }

}

int soma(int a, int b)
{
    return a + b;
}

int sub(int c, int z)
{
    return c - z;
}

float dive(int a, int b)
{
    return (float) a / (float) b;
}

int multi(int a, int b)
{
    return a * b;
}

int ope(int a, int b)
{
    int op;

    std::cout << "digite qual opera��o aritimetrica voc� quer fazer : " << std::endl;
    std::cout << "[1] - soma \n";
    std::cout << "[2] - subtra��o \n";
    std::cout << "[3] - divis�o \n";
    std::cout << "[4] - multiplica��o \n";
    std::cout << "[5] - potencia de " << a << " sob" << b << std::endl;
    std::cout << "[6] - potencia de " << b << " sob" << a << std::endl;
    std::cout << "[7] - raiz quadrada de " << a << std::endl;
    std::cout << "[8] - raiz quadrada de " << b << std::endl;
    std:: cin >> op;

    return op;
}

