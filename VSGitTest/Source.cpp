#include <iostream>

// My headers
// -----------------------------------------------------
#include "Header1.h"
#include "Header2.h"

int main()
{
	float a, b;

	std::cout << "Enter \"a\" = ";
	std::cin >> a;

	std::cout << "Enter \"b\" = ";
	std::cin >> b;

	std::cout << "Sum = " << sum(a, b) << "\n";
	std::cout << "Sub = " << sub(a, b) << "\n";
	std::cout << "Mul = " << mul(a, b) << "\n";
	std::cout << "Div = " << div(a, b) << "\n";

	return 0;
}
