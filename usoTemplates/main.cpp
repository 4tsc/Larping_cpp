#include <iostream>

template <typename T>
T sumar(T a, T b)
{
    return a + b;
}


int main()
{
    std::cout << "sumando enteros: " << sumar(2, 3) << "\n";
    std::cout << "sumando dobles: " << sumar(1.2, 2.3) << "\n";

    return 0;
}