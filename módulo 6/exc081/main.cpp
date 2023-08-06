#include <iostream>


int main()
{
	int numero {12};
	int &ref = numero;
	int *ptr = &numero;
	int *outroptr = ptr;
	void *ptr1 {nullptr};


	std::cout << ref << std::endl;
	std::cout << &ref << std::endl; // aqui estamos pegando o endere�o de ref que � o mesmo endere�o do numero
	std::cout << ptr << std::endl; // mostra o endere�o de numero na memoria ram
	std::cout << *ptr << std::endl; // aqui nos vamos mostrar o que o endere�o apontado, o conteudo ( no caso 12 )
	std::cout << &ptr << std::endl; // aqui vamos mostrar o endere�o de ptr na memoria ram

	*ptr += 200;

	std::cout << *outroptr << std::endl;

	ptr1 = outroptr;

	std::cout << *(int*)ptr1 << std::endl; // aqui como o ptr1 � um ponteiro generico temos que fazer o cast, por que


}
