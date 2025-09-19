#include <iostream>

// QUESTIONS:
/*  

    Local Variables:
    1.  Explain what is meant by "Local Variables" in C++ ?
    A:  It is a variable that is declared in a block of code, between curly braces { local variable }

    2.  In the Following code, what is the intial value of d?
        double d;
    A:  0.0, or potentially undefined behavior

    Argument Passing:
    Explain what is meant by the following terms:
    
    1.  Pass by value?
    A.  Means passing a copy of the actual value to the function. 
        Where changes made to the parameter inside the function do not affect the original variable.

    2.  Pass by address?
    A.  Means passing the memory address of a variable to a function, usally using pointers.
        This allows the function to modify the original variable.
*/

// EXERCISE:
/*
    Write a program which demonstrates the following:
    - Pass by value
    - Pass by address
    - Pass by reference
*/


// Pass by Value (value)
void passByValue(int value)
{
    // Changes won't affect the original
    value = 100;                     
    std::cout << "PassByValue - x:\n";
    std::cout << "\tAddress:\t\t" << &value << "\n";
    std::cout << "\tValue:\t\t\t" << value << "\n"; 
    std::cout << "\tParameter:\t\t" << "x" << "\n";
    std::cout << "\tArgument:\t\t" << "x" << "\n";
    std::cout << "\tDescription:\t\tMakes a copy of the argument variable and modifies that instead.\n";
}

// Pass by Address (*ptr - Pointer)
void passByAddress(int *value)
{
    // Changes will affect the original
    *value = 200;
    std::cout << "PassByAddress - x:\n";
    std::cout << "\tAddress:\t\t" << value << "\t(Matches Original)" << "\n";
    std::cout << "\tValue:\t\t\t" << *value << "\n";
    std::cout << "\tParameter:\t\t" << "*x" << "\n";
    std::cout << "\tArgument:\t\t" << "ptr" << "\n";
    std::cout << "\tDescription:\t\tTargets the original argument, and modifies its value\n";
}

// Pass by Reference (&ref - Reference)
void passByReference(int &value)
{
    // Changes will affect the original
    value = 300;
    std::cout << "PassByReference - x:\n";
    std::cout << "\tAddress:\t\t" << &value << "\t(Matches Original)" << "\n";
    std::cout << "\tValue:\t\t\t" << value << "\n";
    std::cout << "\tParameter:\t\t" << "&x" << "\n";
    std::cout << "\tArgument:\t\t" << "x" << "\n";
    std::cout << "\tDescription:\t\tTargets the original argument, and modifies its value\n";
}

int main()
{
    
    int x = 0;
    int* ptr = &x;

    std::cout << "Original Address of x:\t" << &x << "\n";
    std::cout << "Original value   of x:\t" << x << "\n";
    std::cout << "----------------------------------------\n\n";

    // Pass by Value
    passByValue(x);
    std::cout << "\tAfter passByValue:\tOriginal x = " << x << "\n\n";

    // Pass by Address
    passByAddress(ptr);
    std::cout << "\tAfter passByAddress:\tOriginal x = " << x << "\n\n";

    // Pass by Reference
    passByReference(x);
    std::cout << "\tAfter passByReference:\tOriginal x = " << x << "\n\n";



    return 0;
}

