#include <iostream>

int main()
{
    // Break        =       Breaks out of a loop
    // Continue     =       Skip the current iteration

    // Example #1:  Break   (Stops the loop early)
    std::cout << "Example #1:\tBreak - Breaks on 13" << '\n';
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }

        std::cout << i << '\n';
    }
    
    // Example #2:  Continue    (Skips over 13)
    std::cout << "\nExample #2: \tContinue - Skip 13" << '\n';
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13) 
        {
            continue;
        }
            
        std::cout << i << '\n';
    }

    return 0;
}

