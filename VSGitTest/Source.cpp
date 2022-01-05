#include <iostream>

inline int sum(int a, int b)
{
	return a + b;
}

inline int sub(int a, int b)
{
	return a - b;
}

int main()
{
	int a, b;

	std::cout << "Enter value: ";
	std::cin >> a;

	std::cout << "Enter value: ";
	std::cin >> b;

	std::cout << "Sum = " << sum(a, b) << std::endl;
	std::cout << "Sub = " << sub(a, b) << std::endl;

	return 0;
}