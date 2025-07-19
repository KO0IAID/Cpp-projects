#include <iostream>

/* Namespaces 
	- Provides a solution for preventing naming conflicts. 
	  Normally each entity would require each a unique name.

	  Meaning you CANNOT make multiple variables that would share the same name.
	  Such as:
		int x = 0;	
		int x = 1;	BAD
		int x = 2;	BAD

	- A namespace allows for indentical names for entites
	  so long as the namespaces are diffrent.
*/

namespace First{
	int x = 1;
}
namespace Second{
	int x = 2;
}

int main() {
	int x = 0;				// Global Scope version of X	

	std::cout << x;			// Global Scope			- Global Version		- Output:	0
	std::cout << First::x;	// Namespace prefix		- First	version of X	- Output:	1
	std::cout << Second::x;	// Namespace prefix		- Second version of X	- Output:	2


	using namespace First;	// Declares global references will come from the First Namespace
	std::cout << x;			// Global Scope			- First version of X	- Output:	1


	using namespace Second; // Declares global references will come Second Namespace
	std::cout << x;			// Global Scope			- Second version of X	- Output:	2
	std::cout << First::x;	// namespace prefix		= First verison of x	- Output:	1


	using std::cout;
	cout << "This helps cut down on typing - std:: - when displaying to the console";

	using std::string;
	string sentance = "This helps cut down on - std:: - when declaring a string variable";


	using namespace std;
	/*AVOID THIS 
		using namespace std 
		
		- It has way too many already used variables, functions, etc.
		- Will very likely lead to a naming conflict.
	*/
	return 0;
}

