#include <iostream>
#include <tchar.h>
#include <string>

float media (float a, float b, float c, float d, float e );


int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    std::string nome;
    int i;
    float nota1,nota2,nota3,nota4,nota5;

    std::cout << "digite o nome do aluno : " << std::endl;
    std:: cin >> nome;
    std::cout << "digite as cinco notas do aluno : " << std::endl;
    std::cout << "digite qual foi a nota : " << std::endl;
    std::cout << "nota 1 : " << std::endl;
    std:: cin >> nota1;
    std::cout << "nota 2 : " << std::endl;
    std:: cin >> nota2;
    std::cout << "nota 3 : " << std::endl;
    std:: cin >> nota3;
    std::cout << "nota 4 : " << std::endl;
    std:: cin >> nota5;
    std::cout << "nota 5 : " << std::endl;
    std:: cin >> nota5;

    std::cout << "a media de " << nome << " é : " << std::endl;
    std::cout << media(nota1,nota2,nota3,nota4,nota5) << std::endl;

    system("pause");
    return 0;
}

float media (float a, float b, float c, float d, float e )
{
    return ((a+b+c+d+e)/5);
}
