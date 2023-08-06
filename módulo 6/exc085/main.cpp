#include <iostream>
#include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    float nota[10],media;

    int i,soma{0};
    std::string nome {"joao"};


    std::cout << "digite as cinco notas do aluno : " << nome << std::endl;
    for (i = 0; i <= 9; i++)
    {

        std::cout << "digite a nota " << i + 1 << std::endl;
        std:: cin >> nota[i];
        soma = soma + nota[i];
    }

    media = (float)soma / i;
    std::cout << "a soma de todas as notas é : " << (float)soma << std::endl;
    std::cout << "a media de " << nome << " é : " << media << std::endl;

    system("pause");
    return 0;

}
