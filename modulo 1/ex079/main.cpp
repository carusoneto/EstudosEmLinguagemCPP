#include <iostream>

int main ()
{
    int num {12};
    int *ptr = {nullptr};



    std::cout << num << std::endl;
    std::cout << &num << std::endl;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 2;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << num << std::endl;


    return 0;
}
