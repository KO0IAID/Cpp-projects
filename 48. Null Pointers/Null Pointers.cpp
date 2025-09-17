#include <iostream>

/*
    Null Value      =       A special value that means something has no value.
                            - When a pointer, is holding no value
                            = That pointer is not pointing to anything (null pointer)

    nullptr         =       Keyword that represents a null pointer literal
                            - nullptrs are helpful when determining 
                              if an address was successfully assigned to a pointer

    When using pointers, be careful that you code isn't 
    dereferencing nullptr's or pointing to free memory
    as this will cause undefined behavior
*/



int main()
{
    int *pointer = nullptr;     // Address is = 0000000000000000
    int x = 123;
    pointer = &x;

    // Dereferencing a null pointer can cause undefined behavior
    if (pointer == nullptr) 
    {
        std::cout << "Address was not assigned!\n" << "Cannot safely dereference\n";
    }
    else
    {
        std::cout << "Address was assigned!\n" << *pointer;
    }

    return 0;
}

