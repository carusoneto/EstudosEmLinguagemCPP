#include <iostream>

template <typename t>
t soma(t x = 5, t y = 6)
{
    return x + y;
}

int main ()
{
    std::cout << soma<int>()<< "\n";
    std::cout << soma<int>(8,9) << "\n";
    std::cout << soma<float>(12.23,313.4) << "\n";

    system("pause");
    return 0;
}
