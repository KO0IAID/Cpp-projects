#include <iostream>

/*
    Recursion       =       A programming technique where a function invokes itself from within.
                            It breaks a complex concept into repeatable single steps.

                            Advantages:
                            - Less code
                            - Cleaner
                            - Useful for sorting and search algorithms

                            Disadvantages:
                            - Slower
                            - Uses more memory
                            - Each call adds to the stack, and if done too much can cause a Stack Overflow

                            Note:
                            Most problems can be solved either iteratively, or recursively.
*/


void iterativeWalk(int steps);
void recursiveWalk(int steps);

int iterativeFactorial(int num);
int recursiveFactorial(int num);

int main()
{
    // Example #1:  Walking iterative vs recursive
    iterativeWalk(10);
    std::cout << "\n";

    recursiveWalk(10);
    std::cout << "\n";

    /*/ Example #2:  Factorial of a number
                        - Take a number:                                6
                        - Times it by prior number:                     6 * 5
                        - Times the prior number by its prior number:   6 * 5 * 4
                        - Repeat until 1                                6 * 5 * 4 * 3 * 2 * 1
                        - Factorial is the result:                      720
    */

    iterativeFactorial(10);
    std::cout << "\n";

    recursiveFactorial(10);
    std::cout << "\n";

    return 0;
}

void iterativeWalk(int steps)
{
    std::cout << "Function Call: \n";

    for (int i = 0; i < steps; i++)
    {
        std::cout << "Step: " << i << ": \tYou take a step!\n";
    } 
}
void recursiveWalk(int steps)
{
    if (steps > 0)
    {
        std::cout << "Function Call: \n";
        std::cout << "Step: " << steps << ": \tYou take a step!\n";
        recursiveWalk(steps - 1);
    }
}

int iterativeFactorial(int num)
{
    std::cout << "Function Call: \n";

    int result = 1;

    for (int i = num; i > 0; i--)
    {
        std::cout << i;

        if (i > 1)  
            std::cout << " * ";
        else
            std::cout << " = ";

        result *= i;
    }

    std::cout << result;
    return result;
}
int recursiveFactorial(int num)
{
    std::cout << "Function Call:";

    if (num > 1) 
    {
        std::cout << num << " * " << num - 1;
        std::cout << "\n";

        return num * recursiveFactorial(num - 1);
    }
    else 
    {
        return 1;
    }
}
