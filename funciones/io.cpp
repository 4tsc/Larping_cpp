#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "ingresa tu wea: \n";
	int number{};
	std::cin >> number;
	return number;
}

void writeAnswer(int output)
{

	std::cout << "la suma es: " << output << '\n';

}
