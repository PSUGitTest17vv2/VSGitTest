#include <iostream>
#include <cmath>

class HiringManager
{
public:
	void takeInterview() {
		IInterviewer* interviewer = this->makeInterviewer();
		interviewer->askQuestions();
	}

protected:
	virtual IInterviewer* makeInterviewer() = 0;
};

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
