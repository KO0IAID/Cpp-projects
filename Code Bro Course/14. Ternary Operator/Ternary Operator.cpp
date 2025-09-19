#include <iostream>

int main()
{
    // Ternary Operator ?:      =   Replacement to an if/else statement
    // Syntax:                  =   condition ? if true do this : if false do this;

    
    // Example #1:  Check if a grade is passing
    int grade;
    std::cout << "Enter a grade: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You passed!\n" : std::cout << "You Failed!\n";


    // Example #2:     Check if a number even or odd
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << number << " is even\n" : std::cout << number << " is odd\n";
    

    // Example #3:     Check if you are hungry
    bool hungry = true;
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}