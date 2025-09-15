#include <iostream>

int main()
{
    /* 
        Using sizeof(array) / size(datatype)    Will provide us with the number of elements in an array
    */
     
    // Example #1 - Students
    std::string students[] = { "Spongebob", "Patrick", "Squidward" };

    std::cout << "Example #1: Students" << "\n";

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) 
    {
        std::cout << students[i] << "\n";
    }


    // Example #2 - Grades
    char grades[] = { 'A', 'B', 'C', 'D', 'F' };

    std::cout << "Example #2: Grades" << "\n";

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        std::cout << grades[i] << "\n";
    }

    return 0;
}
