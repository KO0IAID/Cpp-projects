#include <iostream>

/*

    Inheritance     =       A class can recieve attributes and methods from another class
                            - Children classes inherit from a parent class
                            - Helps to reuse similar code found within multiple classes
*/

class Animal
{
    public:
        bool alive = true;

    void eat() 
    {
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal   // We include public, this makes all of Animals public's also Dogs publics.
{                           // - If we don't include public, all of dog's attributes will be set to private by default
    public:

    /*  Dog now has all of the same attributes, and methods of Animal also, but we don't need to write the code. 
    
        bool alive = true;

        void eat()
        {
            std::cout << "This animal is eating\n";
        }
    */
        
        void bark()
        {
            std::cout << "The dog goes woof!\n\n";
        }
};
  
class Cat : public Animal   
{                           
    public:
        void meow()
        {
            std::cout << "The cat goes meow!\n\n";
        }

        void eat()  // This will override the default eat method, which is useful If we want very specific behavior
        {
            std::cout << "Nom Nom Nom!\n";
        }
};

int main()
{
    Dog dog;
        std::cout << dog.alive << "\n";
        dog.eat();
        dog.bark();

    Cat cat;
        std::cout << cat.alive << "\n";
        cat.eat();
        cat.meow();

    return 0;
}

