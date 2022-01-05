#include <iostream>

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

template <typename T>
inline T mul(T a, T b)
{
	return a * b;
}

template <typename T>
inline T div(T a, T b)
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

	std::cout << "Sum = " << sum(a, b) << std::endl;
	std::cout << "Sub = " << sub(a, b) << std::endl;
	std::cout << "Mul = " << mul(a, b) << std::endl;
	std::cout << "Div = " << div(a, b) << std::endl;

	return 0;
}