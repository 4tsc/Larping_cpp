#include <iostream>

int main()
{
	short Valor{ 7 }; // &Valor = 0012FF60
	short otroValor{ 3 }; // &otroValor = 0012FF54

	short* ptr{ &Valor };

	std::cout << &Valor << '\n';
	std::cout << Valor << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	*ptr = 9;

	std::cout << &Valor << '\n';
	std::cout << Valor << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	ptr = &otroValor;

	std::cout << &otroValor << '\n';
	std::cout << otroValor << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	std::cout << sizeof(ptr) << '\n';
	std::cout << sizeof(*ptr) << '\n';

	return 0;
}