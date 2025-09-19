#include <iostream>

double square(double length);
double cube(double length);
std::string concatString(std::string string1, std::string string2);

int main()
{
    // return   = return a value back to where you called the encompassing function


    // Example #1:  Math functions that return a value
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << " cm^2\n";
    std::cout << "Volume: " << volume << " cm^3\n";


    // Example #2:  String functions that return a concatonated string
    std::string firstName = "Nick";
    std::string lastName = "B";
    std::string fullName = concatString(firstName, lastName);
    
    std::cout << fullName;

    return 0;
}

double square(double length) {

    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

std::string concatString(std::string string1, std::string string2) 
{
    return string1 + " " + string2;
}