#include <iostream>

int main()
{

    // Nested Loops         =       A loop contained within another loop

    // Example #1:          =       Output the numbers 00-99
    std::cout << "Example #1: Output 00-99";

    //Sets the tens place
    for (int i = 0; i < 10; i++)
    {
        //Sets the ones place
        for (int j = 0; j < 10; j++)
        {
            std::cout << i << j << '\n';
        }
    }

    // Example #2:          =       Output a rectangle
    std::cout << "\nExample #2: Output a rectangle\n";
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    // Outputs the number of rows
    for (int i = 1; i <= rows; i++)
    {
        // Outputs the number of columns
        for (int j = 1; j <= columns; j++)
        {
            // Outputs the symbol
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    

    return 0;
}


