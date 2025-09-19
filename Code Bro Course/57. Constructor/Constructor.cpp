#include <iostream>

/*
    Constructor     =       A special method that is automatically called when an object is instantiated
                            - Useful for assigning values to attributes as arguments
                            - Also useful for making sure objects have values assigned when they get created
                            - Every object has one, even if one is undefined that is called behind the scenes
*/


class Student
{
    public:
        std::string name;
        int age;
        double gpa;

    /* 
        Student() - Default Constructor
        {
        
        }
    */

    // This is the constructor, its a function that matches the object's name.
    Student(std::string name, int age, double gpa)
    {
        // This refers to itself, this object's attributes name, age, gpa
        // 'this->' is required when the parameter labels, match the attributes names   EX: name name
        // otherwise you can just use: attribute = parameter                            EX: x    name
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    /* 
        When we create the object we call the constructor()
        - Then pass in the values as our arguments
    */
    Student student1("Spongebob", 25, 3.2);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    return 0;
}
