#include <iostream>


int main()
{
	int numero {12};
	int &ref = numero;
	int *ptr = &numero;
	int *outroptr = ptr;
	void *ptr1 {nullptr};


	std::cout << ref << std::endl;
	std::cout << &ref << std::endl; // aqui estamos pegando o endereço de ref que é o mesmo endereço do numero
	std::cout << ptr << std::endl; // mostra o endereço de numero na memoria ram
	std::cout << *ptr << std::endl; // aqui nos vamos mostrar o que o endereço apontado, o conteudo ( no caso 12 )
	std::cout << &ptr << std::endl; // aqui vamos mostrar o endereço de ptr na memoria ram

	*ptr += 200;

	std::cout << *outroptr << std::endl;

	ptr1 = outroptr;

	std::cout << *(int*)ptr1 << std::endl; // aqui como o ptr1 é um ponteiro generico temos que fazer o cast, por que


}
