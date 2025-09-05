#include <iostream>
#include <cmath>		// Must include library to use pow, sqrt, abs, round, floor, ceil, etc.

int main() {

	double a = 1;
	double b = 2;
	double c;
	double d;
	double e = 3.14;
	double f = 2.99;
	double g = 4.01;

	// Min & Max
	c = std::min(a, b);
	d = std::max(a, b);
	std::cout << "Min: " << "\t" << c << "\n";
	std::cout << "Max: " << "\t" << d << "\n";

	// Power of
	c = pow(2, 4);
	std::cout << "Pow: " << "\t" << c << "\n";

	// Square Root
	c = sqrt(9);
	std::cout << "Max: " << "\t" << c << "\n";

	// Absolute
	c = abs(-3);
	std::cout << "Abs: " << "\t" << c << "\n";

	// Round
	e = round(e);
	std::cout << "Round: " << "\t" << e << "\n";

	// Floor
	f = floor(f);
	std::cout << "Round: " << "\t" << f << "\n";

	// Ceiling
	g = ceil(g);
	std::cout << "Round: " << "\t" << g << "\n";

	return 0;
}
