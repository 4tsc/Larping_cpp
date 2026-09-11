#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    
    int numerObjetivo = {dist(gen)};
    int intentos {7};
    int respuesta {};
    
    char eleccion {};

    std::cout << "Se ha generado un numero aleatorio entre 1 y 100, tienes 7 intentos para adivinarlo." << "\n";

    while (true){
        std::cout << "Ingresa tu respuesta: ";
        std::cin >> respuesta;

        if (respuesta == numerObjetivo){
            std::cout << "Acertaste. Fin del juego. " << "\n";
            std::cout << "Deseas jugar otra vez? (s/n)" << "\n";
            std::cin >> eleccion;

            if (eleccion == 's' || eleccion == 'S'){
                numerObjetivo = dist(gen);
                intentos = 7;
                std::cout << "Se ha generado un nuevo numero aleatorio entre 1 y 100, tienes 7 intentos para adivinarlo." << "\n";
                continue;
            } else {
                std::cout << "Gracias por jugar. Fin del juego." << "\n";
                break;
            }

            break;
        } else if (respuesta < numerObjetivo){
            std::cout << "Mayor. Te quedan " << intentos - 1 << " intentos." << "\n";
            --intentos;
        } else {
            std::cout << "Menor. Te quedan " << intentos - 1 << " intentos." << "\n";
            --intentos;
        }

        if (intentos == 0){
            std::cout << "Se han agotado tus intentos. El numero era: " << numerObjetivo << "\n";
            std::cout << "Deseas jugar otra vez? (s/n)" << "\n";
            std::cin >> eleccion;

            if (eleccion == 's' || eleccion == 'S'){
                numerObjetivo = dist(gen);
                intentos = 7;
                std::cout << "Se ha generado un nuevo numero aleatorio entre 1 y 100, tienes 7 intentos para adivinarlo." << "\n";
                continue;
            } else {
                std::cout << "Gracias por jugar. Fin del juego." << "\n";
                break;
            }
        }

    }

    return 0;
}