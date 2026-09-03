#include <iostream>
#include <string>

// Write the function getQuantityPhrase() here

std::string getQuantityPhrase(int cantidad)
{
	std::string modificador{};
	if ( cantidad < 0 ){
		modificador = "negativas";
	} else if ( cantidad == 0 ){
		modificador = "niuna wea";
	} else if ( cantidad == 1 ){
		modificador = "una pura";
	} else if ( cantidad == 2 ){
		modificador = "do weas";
	} else if ( cantidad == 3 ){
		modificador = "tre";
	} else if ( cantidad > 3 ){
		modificador = "varias";
	}

	return modificador;	
}
// Write the function getApplesPluralized() here

std::string getApplesPluralized(int cantidad)
{
	std::string modificador {};
	
	if ( cantidad == 1 ){
		modificador = "manzana";
	} else {
		modificador = "manzanas";
	}

	return modificador;
}



int main()
{
    constexpr int maryApples { 3 };
    std::cout << "La chani tiene " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "Y vo larva? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "Teni " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
