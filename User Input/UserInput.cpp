#include <iostream>
#include <string>

/*	User Input
	
	std::cin
		- Part of the standard library
		- Apart of the <iostream> header
		- Stands for: "Character input"
		- It is used to recieve input from the user and stores it in a veriable.
		- Stops reading as soon as it encounters a space.
		- Contains a secret '/n' character, that gets added to the to run after this command.

	std::getline(std::cin, variablename)
		- Reads an the entire line from the user, including spaces.
		- Apart of the <string> header
		- Preferred way to get input

	IMPORTANT:
		- If you mix this with std::cin, it will cause problems because of the '/n' character
		- It will interpret that secret '/n' as the input.


	std::getline(std::cin >> std::ws, variablename)
		- Solves the issue if you mix std::cin & getline together.
		- It removes any leading whitespaces & '/n' characters that come before the input

	
	Operator:	<<	
	Operator:	>>
	- These operators can do diffrent things depending on the context
	- They can has custom behavior via overloading with custom classes

	<Iostream>
	Insertion Operator:		<<		cout << "Hi";		Inserts "Hi" into the console
	Extraction Operator:	>>		cin  >> x			Extracts the input from console into variable


	Bitwise Shift Operators for Integers
	Shift Left:				<<		Binary:	00000100 (4)	>>	Becomes	00001000 (8)		(Multiply value by 2^n)
	Shift Right:			>>		Binary:	00000100 (8)	<<	Becomes 00000010 (2) 		(Divide value by 2^n)

	Shift Left  Example:	8 << 1 = 16		Same as:	8 * 2^1	= 16
	Shift Right Example:	6 >> 3 = 1		Same as:	6 * 2^3	= 1


*/

int main() {

	std::string name;
	int age;

	//cin	-	Can't handle a full name because of space character
	std::cout << "cin - What is your name?: ";
	std::cin >> name;

	std::cout << "What's your age?: ";
	std::cin >> age;

	std::cout << "Hello " << name << std::endl;
	std::cout << "You are " << age << " years old";


	//getline function	-	Can handle a full name
	std::cout << "getline - What is your full name?: ";
	std::getline(std::cin, name);

	std::cout << "Hello! " << name;

	//getline function + leading whitespace & newline removal - Best practice.	
	std::cout << "better getline - What is your full name?: ";
	std::getline(std::cin >> std::ws, name);

	std::cout << "Hello! " << name;


	return 0;
}