#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include <iterator>  // for std::begin, std::end

/*  fill() = Fills a range of elements with a specified value
    begin()  = Returns a pointer to the first element
    end()    = Returns a pointer to +1 the last element
 
    Syntax:
    fill(begin_ptr, end_ptr, value)
    begin(array)
    end(array)
*/



int main()
{

    int size = 5;
    std::string foods[5];

    // Example #1: Fill the entire array
    fill(begin(foods),end(foods), "Pizza");

    std::cout << "Example #1: Fill Entire" << "\n";
    for (std::string food : foods)
    {
        std::cout << food << "\n";
    }
    std::cout << "\n";


    // Example #2: Fill two halves of the array
    // - Must use a const for size of array.
    const int SIZE = 5;
    std::string foods2[SIZE];

    // First Half 
    // begin (0), end (0 + 2.5), pizza
    fill(foods2, foods2 + (SIZE/2), "pizza");
  
    // Second half 
    // begin(0 + 2.5), end( 0 + 5) hamburger
    fill(foods2 + (SIZE/2), foods2 + SIZE, "hamburger");

    std::cout << "Example #2: In Half" << "\n";
    for (std::string food2 : foods2)
    {
        std::cout << food2 << "\n";
    }
    std::cout << "\n";


    // Example #3: Fill Thirds of the array
    const int SIZE3 = 9;
    std::string foods3[SIZE3];

    // First Third 
    // begin (0), end (0 + 9/3), pizza
    fill(foods3, foods3 + (SIZE3 / 3), "pizza");

    // Second Third 
    // begin(0 + 9/3), end(9/3 * 2) hamburger
    fill(foods3 + (SIZE3 / 3), foods3 + (SIZE3 / 3) * 2 , "hamburger");

    // Final Third 
    // begin(0 + 9/3 * 2), end(0 + 9) hamburger
    fill(foods3 + (SIZE3 / 3) * 2, foods3 + SIZE3, "hotdog");

    std::cout << "Example #3: In Thirds" << "\n";
    for (std::string food3 : foods3)
    {
        std::cout << food3 << "\n";
    }

    return 0;
}

