#include <iostream>

/*

    Function Template       =       Describes what a function looks like.
                                    Can be used to generate as many overloaded functions as needed,
                                    each using different data types.

*/

// It's a lot of work to make overloaded functions for each possible type
int max(int x, int y)
{
    return (x > y) ? x : y;
}
double max(double x, double y)
{
    return (x > y) ? x : y;
}
char max(char x, char y)
{
    return (x > y) ? x : y;
}

// Instead we can declare a generic data type
template <typename T>   // Ex:   Thing

// We then use this generic data type as the data type for our values
// However they still must be of the same type.
T min(T x, T y)
{
    return (x < y) ? x : y;
}

// Alternatively, If we want to use more than 1 datatype we can make two generic data types
template <typename T, typename U>

//We can then set the return type to Auto, and the compiler will figure it out at compile time
auto mixedMin(T x, U y)
{
    return (x < y) ? x : y;
}




int main()
{
    std::cout << "Overloaded Functions:\n";
    std::cout << max(1, 2) << "\n";
    std::cout << max(1.2, 2.1) << "\n";
    std::cout << max('1', '2') << "\n";

    std::cout << "Function Templates: ( 1 Data Type )\n";
    std::cout << min(1, 1) << "\n"; 
    std::cout << min(1.2, 2.1) << "\n";
    std::cout << min('1', '2') << "\n";

    std::cout << "Function Templates: ( 2 Data types & Auto )\n";
    std::cout << mixedMin(1, '2') << "\n";
    std::cout << mixedMin('a', 1.2) << "\n";
    std::cout << mixedMin(true, '2') << "\n";


    return 0;
}

