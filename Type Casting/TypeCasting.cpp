#include <iostream>

/*	Type Casting
	- Converting a value of one data type into another

	Implicit Conversion
	- Happens automatically
	- It is converted by the compiler when the conversion would be safe
	- No syntax needed, you don't need to do anything.


	Explicit Conversion
	- You manually specify the type
	- You precede a value with a new data type one of two ways
	
	C-Style Casting Classic Way:

		(int)mydoublenumber
		-less safe, no type checking

	C++ Style Casting Modern way:

		static_cast<int>(mydoublenumber)
		-Includes type checking

		Modern castings:

			static_cast<>			Cast a standard data type into another						- Safe
			dynamic_cast<>			Downcast a class when using polymorphism (John to Human)	- Safe
			const_cast<>			Remove const off a value, so you can modify it				- Use Caution
			reinterpret_cast<>		Tells the complier to reinterpret the value (&x) to char	- Very unsafe only use when absolutely necessary
*/


int main() {
	int correctanswers = 8;
	int questions = 10;

	// Wrong
	double score = correctanswers/questions * 100;	// Results in: 0	The decimals are truncated to ints after the division
	std::cout << score;								//					8/10 = 0.8	

	// Correct
	score = correctanswers/(double)questions * 100;	// Results in: 80	Cast on the Divisor usually.
}