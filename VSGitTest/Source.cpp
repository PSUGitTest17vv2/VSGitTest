#include <iostream>

inline void printMessage(const char * message)
{
	std::cout << message << std::endl;
}

int main()
{
	printMessage("pgt => Hello psulab");
	return 0;
}