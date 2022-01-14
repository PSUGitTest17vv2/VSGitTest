#include <iostream>
#include <cmath>

// My headers
// -----------------------------------------------------
#include "Header1.h"
#include "Header2.h"

// My function
// -----------------------------------------------------
inline double pow(double value, double power)
{
	temp = value;

	while (power--)
		value *= temp;

	return value;
}

int main()
{
	float a, b;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << "Sum: " << sum(a, b) << "\n";
	std::cout << "Sub: " << sub(a, b) << "\n";
	std::cout << "Mul: " << mul(a, b) << "\n";
	std::cout << "Div: " << div(a, b) << "\n";
	std::cout << "Pow: " << pow(a, b) << "\n";

	return 0;
}
