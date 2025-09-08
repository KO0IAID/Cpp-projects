#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()


int main()
{

    /*
        Random Number Generator (Pseudo-Random) — NOT truly random, but close enough for most purposes.
        It generates a sequence based on a deterministic algorithm seeded with a starting value.

        srand()     = Seeds (configures) the random number generator.
                      - The seed is usually an integer, often the current time.

        time()      = Returns the number of seconds elapsed since the Unix epoch (January 1, 1970, 00:00:00 UTC).
                      - Passing NULL means we just want the current time.
                      - You can also pass a pointer to a time_t variable if you want to store the time.

        rand()      = Generates a pseudo-random number in the range 0 to RAND_MAX.
                      - This sequence depends on the seed given to srand().
    */
    
    // Configure the random number generator
    srand(time(NULL));

    // Generate random number
    int num = rand();

    std::cout << "Rand:\t\t" << num << '\n';
    

    // To generate a random number within a range 0-6 
    // - Modulus by the desired end range number

    num = rand() % 6;

    std::cout << "Range 0-6:\t" << num << '\n';


    // To generate a random number within a range 1-6 
    // - Modulus by the desired end range number
    // - wrap in parentheses
    // - Add the low range number you desire

    num = (rand() % 6) + 1;

    std::cout << "Range 1-6:\t" << num << '\n';

    return 0;
}
