#include <iostream>
#include <tchar.h>

bool validacao(int mp);

int main ()
{
    _tsetlocale(LC_ALL,_T("portuguese"));
	int num;

	std::cout << "digite um numero : " << std::endl;
	std:: cin >> num;

	if (validacao(num) == true)
		std::cout << "o numero é par" << std::endl;
	else
		std::cout << "o numero é impar" << std::endl;

	system("pause");

	return 0;
}

bool validacao (int mp)
{
	if (mp % 2 == 0)
		return true;
	else
		return false;
}
