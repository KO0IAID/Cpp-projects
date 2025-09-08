#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));

    int randNum = (rand() % 5) + 1;
    std::string prize;


    switch (randNum) 
    {
        case 1 : 
            prize = "You won a bumper sticker!\n";
            break;
        case 2:
            prize = "You won a T-Shirt!\n";
            break;
        case 3:
            prize = "You won a free lunch!\n";
            break;
        case 4:
            prize = "You won a gift card!\n";
            break;
        case 5:
            prize = "You won concert tickets!\n";
            break;
    }

    std::cout << prize;

    return 0;
}

