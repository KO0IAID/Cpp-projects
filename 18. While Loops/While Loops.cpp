#include <iostream>
#include <string>

int main()
{
    // Loop:
    // While        = Checks if a condition if true, then if so, it runs the code. Then it checks again and repeats.

    std::string name;

    while(name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

}
