#include <iostream>


int main ()
{
    int num = 1;
    int *ptr;

    ptr = &num;

    std::cout << &ptr << std::endl;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 2;

    std::cout << *ptr << std::endl;
    std::cout << num << std::endl;

    system("pause");
    return 0;
}
