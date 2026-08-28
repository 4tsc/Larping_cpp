#include <iostream>

const int numStandards = 7;

const long stdCode[numStandards] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L };
const char* stdName[numStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };

long getCPPStandard()
{
	return __cplusplus;
}

int main()
{
	long standard = getCPPStandard();

	if (standard == -1)
	{
		std::cout << "ERROR, no se pudo determinar la version de C++, skill issue bro.";
		return 0;
	}

	for(int i = 0; i < numStandards; i++)
	{
		if (standard == stdCode[i])
		{
			std::cout << "Tu compilador usa " << stdName[i]
			    << " (codigo de estandar de lenguaje " << standard << "L)\n";
			break;
		}

		if (standard < stdCode[i])
		{
			std::cout << "Tu compilador usa una version anterior de " << stdName[i]
			    << " (codigo de estandar de lenguaje " << standard << "L)\n";
			break;
		}
	}
	
	return 0;
}
