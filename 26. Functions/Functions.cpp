#include <iostream>

/* 
   Function = Block of reusable code 

   They compile from top - down, so a method must be declared before use.

   If you prefer your functions at the bottom:
   - You can declare the method beforehand
   - Then fully define it after
   - however you must still include any parameters
*/

void happyBirthday(std::string name, int age);

int main()
{
    std::string name = "Nick";
    int age = 21;

    happyBirthday(name,age);

    return 0;
}
void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "You are " << age << " years old!";
}


