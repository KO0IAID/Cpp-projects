#include <iostream>
#include <cmath>

int main()
{
	double a;
	double b;
	double c;

	std::cout << "Hypotenuse Calculator: " << "\n";

	std::cout << "Side A: ";
	std::cin >> a; 
	
	std::cout << "Side b: ";
	std::cin >> b;
	
	a = pow(a,2);
	b = pow(b,2);
	c = sqrt(a + b);

	std::cout << "Side c: " << c;

	return 0;
}
