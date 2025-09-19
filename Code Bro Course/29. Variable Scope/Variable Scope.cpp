#include <iostream>

// Local  Variables  = declared inside a function or block {}   
// Global Variables  = declared outside of all functions        Try to avoid less secure, and polutes the global namespace
// Scope Resolution Operator :: 


// Global Variable - referenceable anywhere
int myGlobalNum = 2;
int priority = 5;

void printNum();

int main()
{
    printNum();
    
    int myLocalNum = 3;
    std::cout << myLocalNum << "\n";

    // The local variable is prioritized over the global.
    int priority = 4;
    std::cout << priority << "\n";

    // Adding the Scope resolution operator specify's we want the global variable instead.
    std::cout << ::priority << "\n";

    return 0;
}
void printNum() 
{
    // Local variable - only referenceable here
    int myLocalNum = 1;
    std::cout << myLocalNum << "\n";
    std::cout << myGlobalNum << "\n";
}
