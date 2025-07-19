#include <iostream>

int main() {

	// Basic Data Types

	//Integer	(whole number)
	int x;				// Declaration
	x = 5;				// Assignment
	int y = 10;			// Both
	int sum = x + y;

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << sum << std::endl;


	//Double	(number including decimal)
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;

	std::cout << price << std::endl;


	//Char		(single character)
	char grade = 'A';
	char inital = 'B';
	char currency = '$';

	std::cout << grade << std::endl;


	//Boolean	(true 1 or false 0) 
	bool student = true;
	bool power = false;
	bool forsale = 1;
	bool soldout = 0;

	std::cout << student << std::endl;
	std::cout << forsale << std::endl;


	//String	(Object from standard library, that represent a sequence of text)
	std::string name = "Nick";
	std::string day = "Saturday";
	std::string food = "pizza";

	std::cout << name << std::endl;
	std::cout << "Today is " << day << std::endl;

	return 0;

}