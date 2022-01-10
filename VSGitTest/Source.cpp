#include <iostream>

// My headers
// -----------------------------------------------------
#include "Header1.h"
#include "Header2.h"

int main()
{
	double a, b;

	std::cout << "Enter value = ";
	std::cin >> a;

	std::cout << "Enter value = ";
	std::cin >> b;

	std::cout << "Sum = " << sum(a, b) << std::endl;
	std::cout << "Sub = " << sub(a, b) << std::endl;
	std::cout << "Mul = " << mul(a, b) << std::endl;
	std::cout << "Div = " << div(a, b) << std::endl;

	return 0;
}
