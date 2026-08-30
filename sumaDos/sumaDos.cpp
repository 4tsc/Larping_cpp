#include <iostream>

int main()
{
	int num1 {};
	int num2 {};	

	std::cout << "Por favor ingrese un numero: " << '\n';
	std::cin >> num1;

	std::cout << "\nAhora otro numero mas: " << '\n';

	std::cin >> num2;

	std::cout << "\nSuma de los numeros: " << (num1 + num2) << " Resta de los numeros: " << (num1 - num2) << '\n';
	
	return 0;
}
