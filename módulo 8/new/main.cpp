#include <iostream>

template <typename t>
t soma (t a, t b)
{
    return a + b;
}

int main ()
{
    std::cout <<  soma<int> (2,2) << std::endl;
    system("pause");
    return 0;
}
