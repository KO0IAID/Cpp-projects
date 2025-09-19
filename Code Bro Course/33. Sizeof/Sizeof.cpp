#include <iostream>

int main()
{
    
    // sizeof()    =       Returns the size in bytes of a - Variable, Data Type, Class, Object, etc.
    
    int num = 1;
    double dbl = 2.5;
    char c = 'a';
    std::string str = "Hello World!";
    bool value = true;
    char grades[] = { 'A', 'B', 'C', 'D', 'F' };

    std::cout << "int:\t\t" << sizeof(num) << "\tbytes\n";
    std::cout << "double:\t\t" << sizeof(dbl) << "\tbytes\n";
    std::cout << "char:\t\t" << sizeof(c) << "\tbytes\n";
    std::cout << "string:\t\t" << sizeof(str) << "\tbytes\n";
    std::cout << "bool:\t\t" << sizeof(value) << "\tbytes\n";
    std::cout << "array:\t\t" << sizeof(grades) << "\tbytes\n";

    // Useful way to calculate the amount of elements in an array
    std::cout << "array count:\t" << sizeof(grades)/sizeof(char) << "\telements\n";

    return 0;
}
