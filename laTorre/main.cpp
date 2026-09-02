#include <iostream>

void distanciaSuelo(int tiempo, float altura)
{
	float accGravedad = {9.8};
	float distanciaRecorrida = accGravedad * (tiempo * tiempo) / 2;
	float alturaRestante = {altura - distanciaRecorrida};
	
	if (distanciaRecorrida >= altura){
		std::cout << "Segundo " << tiempo << " el objeto impacto con el suelo." << "\n";
	} else {
		std::cout << "Segundo " << tiempo << " altura " << alturaRestante << "\n";	
	}
	
}

int main()
{
	std::cout << "Saludos, ingresa la altura de la torre en metros." << "\n";
	float altura{};
	std::cin >> altura;

	distanciaSuelo(0, altura);
	distanciaSuelo(1, altura);
	distanciaSuelo(2, altura);
	distanciaSuelo(3, altura);
	distanciaSuelo(4, altura);
	distanciaSuelo(5, altura);

	return 0;
}
