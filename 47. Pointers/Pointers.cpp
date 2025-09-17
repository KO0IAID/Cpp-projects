#include <iostream>

/*
   Pointers     =       Variables that store a memory address

    Pointers are useful for:
    - Referencing large data structures efficiently
    - Managing dynamic (flexible) memory
    - Enabling indirect access or modification of data
    - Simplifying certain operations by working with addresses

    & (Address-of operator)     — Used to get the address of a standard variable
    * (Dereference operator)    — Used to get the value from a pointer variable

    Standard Variable: name
        Holds a value directly, but you can access its address by preceding it with &
            Example: &x → 0x00000000 (memory address)
            
            - Note: Arrays don't need the prefix &, as they are already an address.

    Pointer Variable: *name
        Holds an address, but you can access the value it points to by preceding it with *
            Example: *ptr → value at that memory address
*/

int main()
{
    // Standard Variable - Approach to showing Value/Address
    std::cout << "Standard Variable:\n";
    std::string name = "Nick";
    std::cout << "Value:\t" << name << "\tAddress:\t" << &name << "\n\n";

    //Pointer Variable - Approach to showing Value/Address
    std::cout << "Pointer Variable:\n";
    std::string *pName = &name;
    std::cout << "Value:\t" << *pName << "\tAddress:\t" << pName << "\n\n";


    // Example: Large data structures
    // Rather than pass it around, we can point people to it.
    std::string freePizzas[5] = { "Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5" };

    std::string* pFreePizzas = freePizzas;

    // Yields a memory address
    std::cout << pFreePizzas << "\n";

    // Yields the first element instead of the pointer
    std::cout << *pFreePizzas << "\n";
}

