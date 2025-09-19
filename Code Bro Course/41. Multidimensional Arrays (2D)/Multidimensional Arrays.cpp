#include <iostream>

int main()
{
    /* 
        2D array [rows] [columns]
        - Works like a grid
        - You can initalize it without specifying amount of rows
        - Columns are required however
    */
    std::string cars[][3] =
    {
        { "Mustang", "Escape", "F-150" },           // Ford
        { "Covette", "Equinox", "Silverado" },      // Chevy
        { "Challenger", "Durango", "Ram 1500" }     // Dodge
    };
    
    // Number of rows = total array size / size of one row
    int rows = sizeof(cars) / sizeof(cars[0]);

    // Number of columns = size of one row / size of one element
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    // Standard way to access of an element
    std::cout << "Standard Access: " << cars[0][0] << "\n\n";

    // Outer loop in charge of rows
    for (int i = 0; i < rows; i++)
    {
        //Inner loop in charge of columns
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
