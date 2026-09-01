#include <iostream>

void imprimir(int corneta)
{

	std::cout << "transformado a entero: " << corneta << "\n";

}



int main()
{
	std::cout << "Ingresa tu wea: " << "\n";

	char ch{};
	std::cin >> ch;
	
	std::cout << "caracter: " << ch << "\n";

	imprimir(ch);

	return 0;
}
