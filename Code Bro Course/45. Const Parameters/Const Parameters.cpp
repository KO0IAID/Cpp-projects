#include <iostream>

/*
    const parameter     =   parameter that is effectively read-only
                            code is more secure & conveys intent
                            useful for references and pointers
*/

void printInfo(std::string &name, int &age);
void constPrintInfo(const std::string& name, const int& age);

int main()
{
    std::string name = "Nick";
    int age = 21;

    constPrintInfo(name, age);
    printInfo(name, age);
    
    return 0;
}

void constPrintInfo(const std::string& name, const int& age)
{
    // Safe, as we no longer can modify our original variables within this method.
    // EX:  name = " "; would cause compilation error
    //      age = 0;    would cause compilation error

    std::cout << "constPrintInfo:" << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n\n";
}

void printInfo(std::string &name, int &age) 
{
    // Unsafe, as we could modify our original variables within this method.
    // EX:  
    name = " ";
    age = 0;

    std::cout << "printInfo:" << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n\n";
}


