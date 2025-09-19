#include <iostream>

int main()
{
    /*  Logical Conditions :    Operator:       Description:
        ---------------------------------------------------------------------------------------
        AND                     &&              Check if two conditions are true
        OR                      ||              Check if at least one of two conditions is true
        NOT                     !               Reverse the logical state of its operand
        ---------------------------------------------------------------------------------------
    */
    
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // Example #1:  AND Condition if temperature is in a certain range
    std::cout << (temp > 0 && temp < 30 ? "The temperature is good!\n" : "The temperature is bad!\n");

    // Example #2:  OR Condition if temperature is one range, OR another
    std::cout << (temp < 0 || temp > 35 ? "Warning: Extreme Temperature.\n" : "Temperature is within the safe range.\n");

    // Example #3:  NOT Condition reverse the logic of "isRaining"
    bool isRaining = false;
    std::cout << (!isRaining ? "You can go outside. It's not raining" : "Stay inside. It's raining.");

    return 0;
}

