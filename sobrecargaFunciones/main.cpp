#include <iostream>

int sumar(int a, int b)
{
    return a + b;
}

double sumar(double a, double b)
{
    return a + b;
}

int main()
{
    std::cout << "Suma de enteros: " << sumar(5, 3) << "\n";
    std::cout << "Suma de 'doubles': " << sumar(5.5, 3.2) << "\n";
    return 0;
}