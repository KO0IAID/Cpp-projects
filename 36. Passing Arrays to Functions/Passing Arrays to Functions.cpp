#include <iostream>

double getTotal(double prices[], int size);

int main()
{
	double prices[] = {49.99, 15.05, 75, 9.99};

	// We must calculate the size beforehand
	int size = sizeof(prices) / sizeof(double);

	// We then pass the array without indexing
	double total = getTotal(prices, size);

	std::cout << "Total: $" << total;

	return 0;
}

double getTotal(double prices[], int size) {

	/*	
		The array when passed, and provided as an argument will decay into a pointer.
		Making our normal means of finding the arrays size invalid.
		We instead calculate it before hand, and then add a parameter for the size.
	*/

	double total = 0;

	for (int i = 0; i < size; i++) 
	{
		total += prices[i];
	}

	return total;
}