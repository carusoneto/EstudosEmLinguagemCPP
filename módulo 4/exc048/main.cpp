#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num = 3;

    switch(num)
    {
        case 1:
            std::cout << "op��o 1" << std::endl;
        break;

        case 2:
            std::cout << "op��o 2" << std::endl;
        break;

        case 3:
            std::cout << "op��o 3" << std::endl;
        break;

        default :
            std::cout << " nenhuma das op�oes compativeis " << std::endl;
        break;
    }
    system("pause");
    return 0;
}
