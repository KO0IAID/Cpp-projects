#include <iostream>

/*  foreach loop =  loop that eases the traversal over an iterable data set
                   
                    Pros: Easier to access and read data
                    - Concise and readable
                    - Prevents off by one errors
                    - Useful to loop through every single element

                    Cons: Less flexable than a for loop
                     - You can't modify the containers structure (ex: insert/erase)
                     - You can't skip or jump to specific elements
                     - You can't iterate backwards or in a custom pattern
 
    Syntax:      for (datatype variable : container) {}
*/

int main()
{
    
    // Example #1:  Strings 
    std::cout << "Example #1: Students\n";
    std::string students[] = { "Spongebob", "Patrick", "Squidward" };

    for (std::string student : students) 
    {
        std::cout << student << "\n";
    }

    // Example #1:  ints 
    std::cout << "\nExample #2: Grades\n";
    int grades[] = { 65, 73, 81, 90 };

    for (int grade : grades)
    {
        std::cout << grade << "\n";
    }

    return 0;
}