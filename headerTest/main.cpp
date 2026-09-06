#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "Ingresa numero alumnos: " << "\n";
	int alumnos {};
	std::cin >> alumnos;

	if ( alumnos > Constants::maxClassSize)
	{
		std::cout << "tamo hasta el pico, demasiados weones en esta clase... " << "\n";		
	} else {
		std::cout << "niun drama papito" << "\n";
	}

	return 0;
}
