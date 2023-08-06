#include <iostream>
#include <tchar.h>

int soma (int a, int b);
int subtracao (int a, int b);
int mult (int a, int b);
float divi (int a, int b);


int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num1,num2,resp;
    bool validacao;
    do
    {
            system("cls");
            std::cout << "digite um numero : " << std::endl;
            std:: cin >> num1;
            std::cout << "digite outro numero : " << std::endl;
            std:: cin >> num2;
            std::cout << "qual operação aritimetica você quer fazer \n";
            std::cout << "\n [1] - soma \n [2] - subtração \n [3] - multiplicação \n [4] - divisão \n";
            std:: cin >> resp;
            switch(resp)
            {
                case 1:
                    std::cout << "os numeros " << num1 << " e " << num2 << " somados é : " << soma(num1,num2) << "\n";
                break;

                case 2:
                    std::cout << "os numeros " << num1 << " e " << num2 << " subtraidos é : " << subtracao(num1,num2) << "\n";
                break;

                case 3:
                    std::cout << "os numeros " << num1 << " e " << num2 << " multiplicados é : " << mult(num1,num2) << "\n";
                break;

                case 4:
                    std::cout << "os numeros " << num1 << " e " << num2 << " divididos é : " << divi(num1,num2) << "\n";
                break;
            }
            std::cout << "voce deseja continuar a calcular ? [1] - sim [2] - nao " << std::endl;
            std:: cin >> resp;
            validacao = (resp == 1)?true:false;
            if (resp == 1 || resp == 2)
                validacao = (resp == 1)?true:false;
            else
            {
                do
                {
                    std::cout << "resposta invalida \n digite [1] - para sim [2] - para nao \n";
                    std:: cin >> resp;
                    validacao = (resp == 1)?true:false;
                }while(resp != 1 && resp != 2);
            }
    }while(validacao);
    system("pause");
    return 0;
 }

int soma (int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

float divi(int a,int b)
{
    return a / b;
}

