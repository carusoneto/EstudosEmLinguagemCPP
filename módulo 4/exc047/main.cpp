#include <iostream>
#include <tchar.h>

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num,num2 {2},num3{5};

    num = (num2 > 10) ? num2:num3;

    std::cout << num << "\n";

    return 0;
}
