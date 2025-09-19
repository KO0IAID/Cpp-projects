#include <iostream>
#include <string>
#include <limits>

int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);

int main()
{
    // Example #1 : Find a int element within an array
    int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter number to search for: " << "\n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) {
        std::cout << myNum << " is at index: " << index << "\n\n";
    }
    else {
        std::cout << myNum << " is not in the array\n";
    }


    // Example #2 : Find a string element within an array
    std::string foods[] = { "pizza", "hamburger", "hotdog"};

    size = sizeof(foods) / sizeof(std::string);
    
    std::string myFood;

    std::cout << "Enter food to search for: " << "\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if (index != -1) {
        std::cout << myFood << " is at index: " << index;
    }
    else {
        std::cout << myFood << " is not in the array";
    }

    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++) 
    {
        if (array[i] == element) 
        {
            return i;
        }
        
        return -1;
    }
}
int searchArray(std::string array[], int size, std::string element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}