#include <iostream>
#include <cmath>

class CommunityExecutive : public IInterviewer
{
public:
	void askQuestions() override {
		std::cout << "Asking about community building!" << std::endl;
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
