#include <iostream>
#include <limits>
int main ()
{
    std::cout << std::numeric_limits<bool>::min() << std::endl;
    std::cout << std::numeric_limits<bool>::max() << std::endl;
    std::cout << std::numeric_limits<char>::min() << std::endl;
    std::cout << std::numeric_limits<char>::max() << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::numeric_limits<int>::min() << std::endl;
}
