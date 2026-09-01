#include <iostream>

double recolectarDoble()
{
	double doble{};
	std::cout << "Ingresa un numero: " << "\n";
	std::cin >> doble;
		
	return doble;
}

char recolectarOperador()
{
	char operador{};
	std::cout << "Ingresa operador: " << "\n";
	std::cin >> operador;

	return operador;
}

double calcular(double primerNumero, double segundoNumero, char operador)
{
	double resultado{};
	
	if (operador == '+')
		resultado = primerNumero + segundoNumero;
	else if (operador == '-')
		resultado = primerNumero - segundoNumero;
	else if (operador == '*')
		resultado = primerNumero * segundoNumero;
	else if (operador == '/')
		resultado = primerNumero / segundoNumero;
	else { 
		std::cout << "invalido\n";
		return 0;
	}
	return resultado;
}

int main()
{
	double numeroUno{recolectarDoble()};
	double numeroDos{recolectarDoble()};
	char operador{recolectarOperador()};	

	std::cout << numeroUno << operador << numeroDos << " es igual a " << calcular(numeroUno, numeroDos, operador) << "\n";

	return 0;
}
