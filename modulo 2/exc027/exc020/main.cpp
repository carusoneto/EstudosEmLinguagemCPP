#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    bool bachou;

    bachou = 1;
    std::cout << "o valor de bachou é : " << bachou << std::endl;
    bachou = 'c';
    std::cout << "o valor de bachou é : " << bachou << std::endl;
    bachou = 0;
    std::cout << "o valor de bachou é : " << bachou << std::endl;
    bachou = true;
    std::cout << "o valor de bachou é : " << bachou << std::endl;
    bachou = false;
    std::cout << "o valor de bachou é : " << bachou << std::endl;
    bachou = 1231241;
    std::cout << "o valor de bachou é : " << bachou << std::endl;


    return 0;

}
