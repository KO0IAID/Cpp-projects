#include <iostream> // Adds header file (.h) 
/*
	<iostream> Input Output stream:

	- handles console input / output, 
	- Stream-based data from files, 
	- memory buffers, and devices
*/

int main() {

	// std		(Standard)					- Name of the namespace we are accessing C++ Standard Library
	// ::		(Scope Resolution Operator)	- Tells compiler exactly where to find a namespace or class
	// cout		(Console Output)			- Displays information to the console - part of <iostream>
	// <<		(Insertion operator)		- Sends value to something - part of <iostream>

	std::cout << "Hello World!" << std::endl;

	return 0; // Returns 0 to represent the program finished with no issues.
}