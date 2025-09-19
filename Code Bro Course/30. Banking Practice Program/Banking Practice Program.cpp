#include <iostream>
#include <iomanip>      // Included Input/Output Manipulators to set precision point values.
#include <limits>       // Included to help clear invalid entries

void    showBalance(double balance);
double  deposit();
double  withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "******************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        // Reset the error flags when the standard input fails to interpret the input
        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        /* cin.ignore:      Tells cin to ignore / discard characters from input buffer
                                Two optional Parameters:
                                   1. Number of characters to ignore
                                   2. Delimiter character at which to stop ignoring.
                
           numeric_limits:  This gives the maximum number of characters to be ignored - a very large number

           streamsize::     Is the type used for counting characters in streams

           Max():           Gets the max value of the type

           This ensures that all characters in the input buffer are discared up to, and including the newline.
        */


        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }

    } while (choice != 4);

    return 0;
}
void showBalance(double balance)
{
    std::cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance << "\n\n";

    // Includes <iomanip>   - header to change input/output formatting flags.
    // setprecision         - Sets the precision on cout
    // fixed                - tells cout to use fixed point notation
}
double deposit()
{
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount > 0) 
    {
        return amount;
    }
    else 
    {
        std::cout << "Invalid amount\n";
        return 0;
    } 
}
double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficent funds\n";
        return 0;
    }
    else if (amount <= 0)
    {
        std::cout << "Invalid amount\n";
        return 0;
    }
    else if (amount > 0 && amount <= balance)
    {
        return amount;
    }
    else 
    {
        return 0;
    }
    
}

