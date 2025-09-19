#include <iostream>
#include <string>           // Include string library

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Length:          Returns a integer with the number of char's in the string
    std::cout << "Length: \t" << name.length() << "\n";
    
    // Append:          Adds a string to the existing string
    std::cout << "Append: \t" << name.append("@gmail.com") << "\n";

    // Erase:           Removes specified amount of characters, after given index
    std::cout << "Erase: \t\t" << name.erase(name.length() + 1 - 10, 10) << "\n";

    // At:              Returns the char at the specified index
    std::cout << "Index: \t\t" << name.at(0) << "\n";

    // Find:            Returns the first index of the character
    std::cout << "Find: \t\t" << (name.find("@")) << "\n";

    // Insert:          Inserts a string at the specified index
    std::cout << "Insert: \t" << name.insert(0, "Nice name: ") << "\n";

    // Clear:           Empty's the string
    name.clear();
    std::cout << "Cleared name: \t" << name << "\n";

    // Empty:           Returns a bool indicating if the name string is empty
    std::cout << "Empty?: \t" << (name.empty() ? "True" : "False") << "\n";


    return 0;
}

