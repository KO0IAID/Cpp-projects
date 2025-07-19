#include <iostream>

int main() {

	/* const - keyword (constant)
		- Specifies that a variables value is constant.
		- Tells the compiler to prevent anything from modifying it
		- it becomes a read-only variable
		- Common convention: Name const variables in all uppercase
	*/

	const double PI = 3.14159;				
	double radius = 10;
	double circumfrence = 2 * PI * radius;

	std::cout << circumfrence << std::endl;

		// If you attempt to change PI it will cause a error
		// PI = 420.69;

		// std::cout << circumfrence << std::endl; -- Will now throw error


}