#include <iostream>

int main()
{
    /* 
        Array   =   A data structure that can hold multiple values.
                    Values are accessed by an index number.
                    Values must be of the same data type.
    */

    // Example #1:  Car lot
    std::cout << "Example #1: Car lot\n";
        
    // Arrays must be declared with a fixed size. 
    std::string cars[3];

    cars[0] = "Corvette";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    // The variable automatically converts to a pointer that points to the memory location of the array.
    std::cout << "Pointer: " << cars << "\n";

    // To output the direct values, we access them by their index.
    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    // Values can be re-assigned
    cars[0] = "Camaro";
    std::cout << cars[0] << "\n\n";


    // Example #2: Price list
    std::cout << "Example #2: Price List\n";

    // Array's sizes, is based on the amount of items within the block
    double prices[] = { 5.00, 7.50, 9.99, 15.00 };

    std::cout << "Pointer: " << prices << "\n";
    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    return 0;
}
