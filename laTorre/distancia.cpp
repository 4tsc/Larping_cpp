#include <iostream>
#include "distancia.h"

namespace distancia
{
    double distanciaSuelo(int tiempo, double altura)
        {
        	double accGravedad = {9.8};
        	double distanciaRecorrida = accGravedad * (tiempo * tiempo) / 2;
        	double alturaRestante = {altura - distanciaRecorrida};

        	if (distanciaRecorrida >= altura){
        		std::cout << "Segundo " << tiempo << " el objeto impacto con el suelo." << "\n";
        	} else {
        		std::cout << "Segundo " << tiempo << " altura " << alturaRestante << "\n";	
        	}

            if(altura <= 0){
                return 0.0;
            }

        return alturaRestante;
    }
}