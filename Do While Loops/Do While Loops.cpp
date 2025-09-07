#include <iostream>

int main()
{
    // Loop:
    // Do while         =       Performs the block of code first. THEN checks the condition, if true it repeats.

    int number;

    do
    {
        std::cout << "Enter a positive number:";
        std::cin >> number;
    } 
    while (number < 0);
}
