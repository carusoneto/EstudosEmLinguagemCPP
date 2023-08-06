#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num = 3;

    switch(num)
    {
        case 1:
            std::cout << "opção 1" << std::endl;
        break;

        case 2:
            std::cout << "opção 2" << std::endl;
        break;

        case 3:
            std::cout << "opção 3" << std::endl;
        break;

        default :
            std::cout << " nenhuma das opçoes compativeis " << std::endl;
        break;
    }
    system("pause");
    return 0;
}
