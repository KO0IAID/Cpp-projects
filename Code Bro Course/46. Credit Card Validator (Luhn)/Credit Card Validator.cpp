#include <iostream>

/*
    Luhn Algorithm
    - Used to verify credit card numbers
    - IMEI numbers
    - Some govement IDs

    1. Double every second digit from right to left. IF doubled number is 2 digits, split them.
    2. Add all single digits from step 1.
    3. Add all odd numbered digits from right to left
    4. Sum results from steps 2 & 3
    5. If step 4 is divisble by 10, # is valid 

    Credit Card:6011000990139424
    Example:    6011    0009    9013    9424
    Step 1:     6 1     0 0     9 1     9 2      doubled  -> Then split ->    1 2 2   0 0     1 8 2    1 8 4
    Step 2:   1 2 2     0 0   1 8 2   1 8 4      Added up ->                  29
    Step 3:      0 1     0 9     0 3     4 4     Added up ->                  21
    Step 4:                                      Sum results from 2 & 3 ->    50
    Step 5:                                      is Divisble by 10?           True

    Credit card number is valid
*/

int getDigit(const int number);
int sumOddNumberedDigit(const std::string cardNumber);
int sumEvenNumberedDigit(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    // Step 4:
    result = sumEvenNumberedDigit(cardNumber) + sumOddNumberedDigit(cardNumber);

    // Step 5:
    if (result % 10 == 0)
    {
        std::cout << cardNumber << " is Valid!";
    }
    else
    {
        std::cout << cardNumber << " is Invalid!";
    }
    


    return 0;
}
int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
    /* 
        Example: (ones)
        2   %   10 ->   0                       leaving a remainder of 2

        2   /   10 ->   0.2 truncates to        0
        0   %   10 ->   fits into 0 zero times, leaving a remainder of 0
                                                2+0 = 2

        Example: (tens)
        12  %   10 ->   2                       removes the tens place

        12  /   10 ->   1.2 truncates to        1
        1   %   10 ->   fits into 1 zero times, leaving a remainder of 1
                                                1+1 = 2
    */
}
int sumOddNumberedDigit(const std::string cardNumber) 
{
    int sum = 0;

    /*
        Credit Card Number Size
            - we remove -1 because of 0 indexing
        Loop:
            - we work right to left (high to low)
            - decrease i by -2 so we only go to even numbers
    */

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        // Step 3:
        // We remove the char 0 still
        sum += cardNumber[i] - '0';
    }

    return sum;
}
int sumEvenNumberedDigit(const std::string cardNumber) 
{
    int sum = 0;

    /*
        Credit Card Number Size
            - we remove -1 because of 0 indexing
            - we remove another -1 because we want to start on even/second to last number

        Loop: 
            - we work right to left (high to low)
            - decrease i by -2 so we only go to even numbers
    */

    for (int i = cardNumber.size() - 2; i >= 0; i-= 2)
    {
        // Step 1 & step 2:
        // double it, then send it
        sum += getDigit((cardNumber[i] - '0') * 2);
        /*
            We are passing a char for a int parameter here
            - We need to think of letters as their equivelent numeric value from the ASCII table
            As  48 = '0'
                49 = '1'
                50 = '2'
                51 = '3'
                52 = '4'
                53 = '5'
                54 = '6'
                55 = '7'
                56 = '8'
                57 = '9'
            Technically we can do - 48 alternatively here too.
            But the char '0' is worth 48, and it helps avoid magic numbers, and is clearer to what we are avoiding
        */
    }
    return sum;
}

