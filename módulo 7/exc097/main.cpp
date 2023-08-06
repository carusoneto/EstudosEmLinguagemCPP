#include <iostream>
#include <vector>
#include <string>

int main ()
{
    std::string nome{"arthu monteiro lobato"};
    std::vector <int> vet = {0,3,6,9,5,8};

    vet.push_back(55);

    std::cout << nome << std::endl;
    for (int v : vet)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
