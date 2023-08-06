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

    std::cout << "o valor que est� guardado no endere�o de mem�ria, que est� sendo chamado de num, pela abstra��o de codigo \n";
    std::cout << "� : " << num << std::endl;
    std::cout << "agora eu vou por o valor que est� sendo apontado na variavel ponteiro ptr : " << ptr << std::endl;

    ptr = &num;

    std::cout << "agora, eu atribui a variavel ptr, o valor do endere�o de num, apontei a variavel ptr para a variavel num \n ";
    std::cout << "que agora tem o endere�o de num : " << ptr << std::endl;
    std::cout << " e agora eu vou fazer um desrreferenciamento da variavel num, com a minha variavel ptr eu vou apontar \n";
    std::cout << "o que tem dentro da minha variavel num : " << *ptr << std::endl;

    *ptr = 10;

    std::cout << "agora eu fiz uma atribui��o indireta para a variavel num atravez do ponteiro ptr que est� apontando \n";
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
