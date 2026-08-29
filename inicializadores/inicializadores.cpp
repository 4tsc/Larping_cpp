#include <iostream>

int main()
{
	int a; // inicializacion por defecto (sin inicializador)

	int b = 2; // inicializacion por copia

	int c (3); // inicializacion directa

	int d {4}; // inicializacion directa de listas

	int e {}; // inicializacion de valor

	std::cout << "inicializacion por defecto: " << a << '\n';

	std::cout << "inicializacion por copia: " << b << '\n';

	std::cout << "inicializacion directa: " << c << '\n';	

	std::cout << "inicializacion directa de listas: " << d << '\n';

	std::cout << "inicializacion de valor: " << e << '\n';

	return 0;
}
