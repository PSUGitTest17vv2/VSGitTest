#include <iostream>

inline int sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;

	std::cout << "Enter value: ";
	std::cin >> a;

	std::cout << "Enter value: ";
	std::cin >> b;

	std::cout << "Sum = " << sum(a, b) << std::endl;

	return 0;
}