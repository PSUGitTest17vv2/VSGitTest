#include <iostream>

inline int mul(int a, int b)
{
	return a * b;
}

inline float div(float a, float b)
{
	return a / b;
}

int main()
{
	float a, b;

	std::cout << "Enter value: ";
	std::cin >> a;

	std::cout << "Enter value: ";
	std::cin >> b;

	std::cout << "Mul = " << mul(a, b) << std::endl;
	std::cout << "Div = " << div(a, b) << std::endl;

	return 0;
}