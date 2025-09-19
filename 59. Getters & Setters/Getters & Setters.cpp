#include <iostream>

/*
    Abstraction     =       Hiding unnecessary data from outside of the class
                            - Hides unnecessary internal details from the outside world
                            - Keeps data access and modification within the class
                            - Simplifies usage of the class and protects internal state
    
    Getter          =       Function that makes private attributes READABLE
                            - Allows read-only access to private attributes
                            - Exposes data safely without allowing modification.
                            - Useful when you want to allow access but keep control

    Setter          =       Function that makes private attributes WRITEABLE
                            - Allows controlled modification of private attributes.
                            - Can include validation or restrictions before changing a value.
                            - Helps prevent invalid or unsafe changes to the data, that might break classes functionality
*/

class Stove
{
    // Now we can't directly access the temperature in our main now
    private:
        int temperature = 0;
    
    // We can however access these methods in the main
    public:
        int getTemperature()                    
        { 
            return temperature; 
        }
        void setTemperature(int temperature)
        {
            // Imagine a dial on a stove with 10 temperature settings
            if (temperature >= 0 && temperature <= 10)
                this->temperature = temperature;
            else if (temperature < 0)
                this->temperature = 0;
            else if (temperature > 10)
                this->temperature = 10;
        }
        // We can even use our setters inside our constructor
};

int main()
{
    Stove stove;

    /* 
        If temperature was public to modify it's values here outside the class we would do the following:

        stove.temperature = 1000;

        However we might want to put restrictions/validation/range in place to prevent our temp from being that high.
    */

    // Using the Setter to set the value, this make our code cleaner here, and now it includes validation.
    stove.setTemperature(50);

    // Using the getter to see the value, this allows us access to the data still.
    std::cout<< stove.getTemperature();
}

