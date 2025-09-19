#include <iostream>

/*
    Overloaaded Constructors      =     Allows for multiple constructors with the same name but diffrent parameters
                                        - Allows us to have varying arguments when instantiating an object
*/

class Pizza
{
    public:
        std::string topping1;
        std::string topping2;

    // No Toppings
    Pizza()
    {
        
    }
    
    // 1 Topping
    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }

    // 2 Toppings
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }


    void DisplayPizza()
    {
        std::cout << "Pizza Ingredients:" << "\n";
        std::cout << topping1 << "\n";
        std::cout << topping2 << "\n";
    }
};

int main()
{
    Pizza pizza1;
    Pizza pizza2("Pepperoni");
    Pizza pizza3("Pepperoni" , "Peppers");

    pizza1.DisplayPizza();
    pizza2.DisplayPizza();
    pizza2.DisplayPizza();

    return 0;
}
