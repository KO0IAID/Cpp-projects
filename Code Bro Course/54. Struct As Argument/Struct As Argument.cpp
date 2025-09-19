#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar_ByValue(Car car);
void printCar_ByReference(Car &car);

int main()
{
    Car car1 = { "Mustang", 2023, "Red" };
    Car car2 = { "Corvette", 2024, "Blue" };

    // Example #1: By Value - Creates a copy
    std::cout << "Address:\t" << &car1 << "\n";
    printCar_ByValue(car1);

    // Example #2: By Value - Uses Original
    std::cout << "Address:\t" << &car2 << "\n";
    printCar_ByReference(car2); // No need to add &

    return 0;
}



void printCar_ByValue(Car car) 
{
    /* When we pass the struct to the function
        - Its passed by value, not reference,
        - So it creates a copy, and the copy is used here
        - Any modifications here WON'T affect the original
        - After the function ends, this copy car is destroyed
        
    */

    std::cout << "Address:\t" << &car << "\n";
    std::cout << "Model:\t" << car.model << "\n";
    std::cout << "Year:\t" << car.year << "\n";
    std::cout << "Color:\t" << car.color << "\n\n";
}

void printCar_ByReference(Car &car)
{
    /* When we pass the struct to the function
        - Its passed by reference
        - It uses the original car
        - Modifications WILL affect the original
        - After the function ends, nothing is destroyed
    */

    std::cout << "Address:\t" << &car << "\n";
    std::cout << "Model:\t" << car.model << "\n";
    std::cout << "Year:\t" << car.year << "\n";
    std::cout << "Color:\t" << car.color << "\n\n";
}
