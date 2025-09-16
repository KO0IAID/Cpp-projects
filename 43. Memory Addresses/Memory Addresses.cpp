#include <iostream>

/*
    Memory Address  =   a location in memor where data is stored
                        a memory address can be accessed with '&' (address-of operator)

    They are stored as hexadecimal with a 0x prefix just to indicate it is hexidecimal

    Memory Address examples:
    16 bit systems  prefix + 4 digits   0x0000              (4)  
    24 bit systems  prefix + 6 digits   0x000000            (6)
    32 bit systems  prefix + 4 digits   0x00000000          (8)
    64 bit systems  prefix + 4 digits   0x0000000000000000  (16)

    - Leading zeros (left) are often omitted when displaying addresses
*/

int main()
{
    std::string name = "Nick";
    int age = 21;
    bool student = true;
                                            //  Examples: of Hexidecimal to decimal            
    std::cout << &name << '\n';             //  814066169344    -   strings 12 bytes 32 bit systems, and 24 bytes on 64 bit.
    std::cout << &age << '\n';              //  814066169340    -   ints    take 4 bits
    std::cout << &student << '\n';          //  814066169339    -   bools   take 1 bit

    return 0;
}

