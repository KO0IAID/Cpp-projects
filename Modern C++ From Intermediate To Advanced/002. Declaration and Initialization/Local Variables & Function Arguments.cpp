#include <iostream>
#include <array>
#include <vector>


// QUESTIONS
/*
    Universal Initialization:
    1.  What is meant by universal initialization in C++?
    A:  It is the use of curly braces `{}` to consistently initialize variables and objects, 
        introduced in C++11.

    2.  What are the advanges of universal initialization?
    A:  It provides consistent syntax, prevents narrowing conversions, supports 
        initializer lists, avoids some parsing issues, and improves code clarity.

    Type Alias:
    1.  What is meant by a "type alias"? Why is it useful?
    A:  A type alias gives a new, often simpler or more readable name to an existing type. 
        It is useful for improving code readability and simplifying complex type definitions.
*/

int main()
{
    // EXERCISE 1: Universal Initialization
    /*
        1.  Write a program which demonstrates universal initialization of built in types
        and objects with single and multiple initial values.
    */ 
    int x{1};
    std::string s{ "Example" };
    int arr[]{1,2,3};

    std::array<int, 3> array{ 1,2,3 };
    std::vector<int> v{ 1,2,3 };


    // EXERCISE 2:  Type Alias
    /*
    1.  Rewrite the following type alias using Modern C++ Alternative:

            typedef vector<int> IntVec;
            vector<IntVec> vec_of_vec;
    */
    using IntVec = std::vector<int>;                    // List of Ints
    using Vec_of_vec = std::vector<std::vector<int>>;   // List of Lists that holds Ints

    IntVec List{ 1,2,3 };
    Vec_of_vec matrix
    {
        {1,2},
        {3,4},
        {5,6}
    };

    return 0;
}

