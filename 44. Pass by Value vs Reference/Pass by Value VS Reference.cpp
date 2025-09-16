#include <iostream>

void swapByValue(std::string x, std::string y);
void swapByReference(std::string& x, std::string& y);

int main()
{
    // The goal is to swap the two variables: So x = water, and y = Kool-aid

    
    std::string x = "Kool-aid";
    std::string y = "Water";

    std::cout << "Original Values: " << '\n';   // Display Original Values
    std::cout << "X: " << x << "\tMemory Address:\t" << &x << "\t(Originals)" << '\n';
    std::cout << "Y: " << y << "\tMemory Address:\t" << &y << "\t(Originals)" << "\n\n";


    std::cout << "swapByValue: " << "\n";
    swapByValue(x, y);                          // DOESN'T actually swap the values, just the copies.

    std::cout << "swapByReference: " << '\n';
    swapByReference(x, y);                      // DOES swap the actual values, by targeting the address

    return 0;
}

void swapByValue(std::string x, std::string y) 
{
    // x, and y are copy variables based on the original values. 
    // The swap is only performed on the copies here in this block.
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << "\tMemory Address:\t" << &x << "\t(Diffrent Variables - got swapped)" << '\n';
    std::cout << "Y: " << y << "\tMemory Address:\t" << &y << "\t(Diffrent Variables - got swapped)" << "\n\n";
}
void swapByReference(std::string &x, std::string &y)
{
    // x, and y are now accessed directly at the memory address.
    // The swap now properly swaps the value from one memory address to another.
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << "\tMemory Address:\t" << &x << "\t(Orignals - swapped)" << '\n';
    std::cout << "Y: " << y << "\tMemory Address:\t" << &y << "\t(Orignals - swapped)" << "\n\n";
}


