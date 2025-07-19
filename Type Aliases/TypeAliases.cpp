#include <iostream>
#include <vector>

/* 
	typedef - Data type Keyword 
	- Is used to create a addtional name (alias) for a data type. 
	- Doesn't make a new data type.
	- It is a new identifier for an existing type.
	- Helps with readability, and reduces typos.
	- Shortens down long data types
	- Use when there is a clear benefit
	- it is used in C or legacy C++ as it was the only option
	- Replaced by 'using' keyword.
	- Naming convention: add _t after 

	using - Data type keyword
	- Added in C++11 and is more modern
	- Behaves just like typedef
	- Works better with templates
	- Not to be used for C databases, just C++ ones.
	- Clearer syntax that works like assignment
*/


// Deftype - Examples:
typedef std::vector<std::pair<std::string, int>> pairlist_t; // Creates a array of keyvalue pairs
typedef std::string text_t;
typedef int wholenumber_t;

// Using - Examples:
using KeyvalueList_t = std::vector<std::pair<std::string, int>>;
using sentance_t = std::string;
using number_t = int;
	

int main() {
	
	wholenumber_t x = 3;
	text_t word = "deftype";

	sentance_t modernstandard = "using";
	number_t y = 5;

	return 0;
}