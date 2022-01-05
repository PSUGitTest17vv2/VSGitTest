#include <iostream>

inline int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int a, b;

	std::cout << "Enter value: ";
	std::cin >> a;

	std::cout << "Enter value: ";
	std::cin >> b;

	std::cout << "Mul = " << mul(a, b) << std::endl;

	return 0;
}