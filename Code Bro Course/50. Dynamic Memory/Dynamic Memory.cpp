#include <iostream>

/*

	Dynamic Memory		=		Memory that is allocated after the program is already compiled & running.
								- Use the 'new' operator to allocate memory in the heap rather than the stack.
								- Useful when we don't know how much memory we will need.
								- Makes programs more flexible, especailly when accepting user input.
								- You MUST perform garbage collection on these variables using 'delete'
								- If not done, it can cause a memory leak.

*/

int main()
{
	// Example #1:	Creating a variable

		// Starts without an address
		int *pNum = nullptr;
		std::cout << "Address:\t" << pNum << "\n";

		// New will return a new memory address, and we specify the data type for size
		pNum = new int;
		*pNum = 21;

		std::cout << "Address:\t" << pNum << "\n";
		std::cout << "Value:\t\t" << *pNum << "\n";

		// IMPORTANT - Delete the variable after you're done with it.
		delete pNum;

	// Example #2:	Creating a Dynamic Array
		/*
			Practical example:

			We don't know how many grades we're going to have as its up to user input
			so we don't know how large to make our array.

			Without Dynamic Memory approach:

			- Normally We'd try and take user input for the size
				
				int size;
				std::cout << "How many grades to enter in?" << "\n";
				std::cin >> size;

			- Then try to create the array

				char grades[size]; - ERROR: Size MUST be of type 'const'
				
			- Except we can't! Because the size must be of type 'const'

			- But we can't just make it a const either!
			- As when we declare a const we need to pick a value! 
			  
			- Therefore we're stuck. We HAVE to make our array some sort of fixed size ahead of time.
			- Which isn't flexible at all.
		*/


		// Dynamic Memory Approach:

		// Starts with a null ptr, because we can't just make the array yet.
		char *pGrades = nullptr;
		int size;

		std::cout << "How many grades to enter in?" << "\n";
		std::cin >> size;

		// Now we are allowed to make it like this:
		pGrades = new char[size];

		// Takes input
		for (int i = 0; i < size; i++)
		{
			std::cout << "Enter grade letter" << i + 1 << ": ";
			std::cin >> pGrades[i];
		}
		// Outputs the results
		for (int i = 0; i < size; i++)
		{
			std::cout << pGrades[i] << " ";
		}

		// IMPORTANT - Delete the array when done
		delete[] pGrades;

	return 0;
}
