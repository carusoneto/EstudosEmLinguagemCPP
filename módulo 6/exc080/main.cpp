#include <iostream>
#include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
    int num {12};
    char letra {'a'};
    int *ptr{nullptr};
    int *ptr2 {nullptr};
    void *ptrG {nullptr};

    std::cout << "o valor que está guardado no endereço de memória, que está sendo chamado de num, pela abstração de codigo \n";
    std::cout << "é : " << num << std::endl;
    std::cout << "agora eu vou por o valor que está sendo apontado na variavel ponteiro ptr : " << ptr << std::endl;

    ptr = &num;

    std::cout << "agora, eu atribui a variavel ptr, o valor do endereço de num, apontei a variavel ptr para a variavel num \n ";
    std::cout << "que agora tem o endereço de num : " << ptr << std::endl;
    std::cout << " e agora eu vou fazer um desrreferenciamento da variavel num, com a minha variavel ptr eu vou apontar \n";
    std::cout << "o que tem dentro da minha variavel num : " << *ptr << std::endl;

    *ptr = 10;

    std::cout << "agora eu fiz uma atribuição indireta para a variavel num atravez do ponteiro ptr que está apontando \n";
    std::cout << "para ela " << *ptr <<std::endl;

    ptr2 = ptr;

    std::cout << *ptr2 << std::endl;

    *ptr2 = *ptr + 10;

    std::cout << num << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;

    ptrG = &num;

    std::cout << *(int*)ptrG << std::endl;

    ptrG = &letra;

    std::cout << *(char*)ptrG << std::endl;
    std::cout << ptrG << std::endl;

    return 0;


}
