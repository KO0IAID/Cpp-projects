#include <iostream>

/*
        Struct      =       A structure that groups related variables under one name.
                            - Structs can contain many diffrent data types (string, int, bool)
                            - Variables in a struct are known as "Members"
                            - Members can be accessed with . Known as the class member access operator
                            - Members are defaulted to public 
                            - Almost identical to a class, only diffrence is they default to public access
                            - Where as a class defaults to private access
*/

struct student 
{
    std::string name;       // Members
    double gpa;
    bool enrolled = true;   // You can set default values as well
};


int main()
{
    // Example #1: Creating the struct
        student student1;

        // Modifying Values
        student1.name = "Spongebob";
        student1.gpa = 3.2;
        student1.enrolled = true;

        // Use of the struct
        std::cout << "Name:\t\t" << student1.name << "\n";
        std::cout << "GPA:\t\t" << student1.gpa << "\n";
        std::cout << "Enrolled:\t" << student1.enrolled << "\n\n";

    // Example #2: Creating the struct with values set
        student student2 = { "Patrick", 2.1, false };

        // Use of the struct
        std::cout << "Name:\t\t" << student2.name << "\n";
        std::cout << "GPA:\t\t" << student2.gpa << "\n";
        std::cout << "Enrolled:\t" << student2.enrolled << "\n\n";


    return 0;
}

