#include <iostream>

/*
    Object      =       A collection of attributes/members and methods/functions
                        - They can have characteristics and perform actions
                        - Can be used to mimic real world items (ex: Phone, Book, Dog)
                        - Created from a class which acts as a "blue-print"
*/

class Human
{
    /* By default attributes / members are private so we specify here.
       - Public - Allows attribute/members to be modifyed externally such as in main
       - Private- The values can only be modified internally by the object itself
    */
    public:
        std::string name = "Jerry";                 // Setting a default value for human objects
        std::string occupation = "Unemployeed";     // Setting a default value
        int age = 35;                               // Setting a default value

        void eat()
        {
            std::cout << name << " is eating\n";
        }
        void drink()
        {
            std::cout << name << " is drinking\n";
        }
        void sleep()
        {
            std::cout << name << " is sleeping\n\n";
        }
};

int main()
{
    // Example #1: Basic
        // Creating the object
        Human human1;

        // Modifying the values
        human1.name = "Rick";
        human1.occupation = "Scientist";
        human1.age = 70;

        // Display the object and its values.
        std::cout << "Name:\t\t"        << human1.name << "\n";
        std::cout << "Occupation:\t"    << human1.occupation << "\n";
        std::cout << "Age:\t\t"         << human1.age << "\n";
        human1.eat();
        human1.drink();
        human1.sleep();

    // Example #2: Simplified
        // Creating the object
        Human human2 = { "Morty", "Student", 15 };

        // Display the object and its values.
        std::cout << "Name:\t\t" << human2.name << "\n";
        std::cout << "Occupation:\t" << human2.occupation << "\n";
        std::cout << "Age:\t\t" << human2.age << "\n";
        human2.eat();
        human2.drink();
        human2.sleep();

     // Example #3: Default Values
        // Creating the object
        Human human3;

        // Display the object and its values.
        std::cout << "Name:\t\t" << human3.name << "\n";
        std::cout << "Occupation:\t" << human3.occupation << "\n";
        std::cout << "Age:\t\t" << human3.age << "\n";
        human3.eat();
        human3.drink();
        human3.sleep();


    return 0;
}

