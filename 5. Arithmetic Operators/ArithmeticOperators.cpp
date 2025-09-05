#include <iostream>

/*	Arithmetic Operators
	- Return or assign the result of a specific arithmetic operation
	- (+ - * /)
	- When using Int data types, and the result has a decimal it truncate(remove) any decimals
	- Order of operation applies (P. E. M. D. A. S)
		Parenthesis, Exponents
		Multiplication, Division/Modulus
		Addition, Subtraction


	Modulus Operator %
	- Returns the remainder from the divison
*/



int main() {
	
	// Addition:
	int students = 20;

	students = students + 10;		// Standard:					students = 20 + 10	Equals:	30
	students += 5;					// Short hand:					students = 30 + 5	Equals:	35
	students++;						// Post-increment operator:		students = 35 + 1	Equals:	36
	std::cout << students;


	// Subtraction:
	int teachers = 10;

	teachers = teachers - 5;		// Standard:					teachers = 10 - 5	Equals:	5
	teachers -= 1;					// Short hand					teachers = 5 - 1	Equals:	4
	teachers--;						// Post-decrement operator:		teachers = 4 - 1	Equals: 3
	std::cout << teachers;


	// Multiplication
	int parents = 15;

	parents = parents * 2;			// Standard						parents = 15 * 2	Equals: 30
	parents *= 2;					// Short hand					parents = 30 * 2	Equals: 60
	std::cout << parents;


	// Division
	int schools = 150;

	schools = schools / 3;			// Standard						schools = 150 / 3	Equals: 50
	schools /= 5;					// Short hand					schools = 50 / 5	Equals: 10
	std::cout << schools;


	// Modulus
	int money = 100;

	money = money % 8;				// Standard						money = 100 % 8		Equals: 4	(4 remainder)
	money %= 2;						// Short hand					money = 4 % 2		Equals:	0	(0 remainder)
	std::cout << money;

	return 0;
}