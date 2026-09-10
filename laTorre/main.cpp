#include <iostream>
#include "distancia.h"

int main()
{
	std::cout << "Saludos, ingresa la altura de la torre en metros." << "\n";
	double alturaInicial{};
	std::cin >> alturaInicial;

	int tiempo = 0;
	double alturaActual {};
	
	while(alturaActual >= 0.0){
		alturaActual = distancia::distanciaSuelo(tiempo, alturaInicial);
		tiempo++;
	}

	return 0;
}
