#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "*************** Temperature Conversion ***************\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n\n";

    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    // Celsius to Fahrenheit
    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        // Celsius to Fahrenheit formula
        temp = (1.8 * temp) + 32;

        std::cout << "\nTemperature is: " << temp << "F\n";
    }
    // Fahrenheit to Celsius
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        // Fahrenheit to Celsius formula
        temp = (temp - 32) / 1.8;

        std::cout << "\nTemperature is: " << temp << "C\n";
    }
    // Invalid Response
    else
    {
        std::cout << "\nPlease enter only C or F\n\n";
    }

    std::cout << "******************************************************";

    return 0;
}

