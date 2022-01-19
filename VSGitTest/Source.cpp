#include <iostream>
#include <cmath>

template <typename T>
inline T sum(T a, T b)
{
	return a + b;
}

template <typename T>
inline T sub(T a, T b)
{
	return a - b;
}

int main()
{
	double a, b;

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
