#include <iostream>
#include <tchar.h>
#define vidas 10
int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    const int num = 10;
    int totalvidas;

    totalvidas = num - 1;
    std::cout << "o total de vidas � : " << totalvidas << std::endl;
    std::cout << "o valor da varial num � : " << num << std::endl;
    system("pause");

    return 0;
}
