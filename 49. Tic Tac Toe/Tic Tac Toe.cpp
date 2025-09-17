#include <iostream>
#include <ctime>

void clearConsole();
void drawBoard(char *spaces);
void playerMove(char* spaces, const int size, char player);
void computerMove(char *spaces, const int size, char computer);
bool boardNotFull(char* spaces, const int size);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char* spaces, const int size);

int main()
{

    char spaces[9] =
    {   ' ', ' ', ' ',  // Top row:     index 0,1,2
        ' ', ' ', ' ',  // Middle row:  index 3,4,5
        ' ', ' ', ' '   // Bottom row:  index 6,7,8
    };
    const int size = sizeof(spaces) / sizeof(spaces[0]);

    char player = 'O';
    char computer = 'X';
    bool running = true;
    srand(time(0));
    
    while (running)
    {
        clearConsole();
        drawBoard(spaces);

        playerMove(spaces, size, player);
        if (checkWinner(spaces, player, computer))
        {
            clearConsole();
            drawBoard(spaces);
            std::cout << "YOU WIN!\n";
            running = false;
            break;
        }

        computerMove(spaces, size, computer);
        if (checkWinner(spaces, player, computer))
        {
            clearConsole();
            drawBoard(spaces);
            std::cout << "YOU LOSE!\n";
            running = false;
            break;
        }

        if (checkTie(spaces, size))
        {
            clearConsole();
            drawBoard(spaces);
            std::cout << "IT'S A TIE!\n";
            running = false;
            break;
        }
    }
    std::cout << "Thanks for playing!\n";

    return 0;
}

void drawBoard(char* spaces)
{
    std::cout << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n";
    std::cout << "\n";

}
void clearConsole()
{
#ifdef _WIN32   //Windows
    const char *CLEAR_COMMAND = "cls";
#else           //Linux & Mac
    const char* CLEAR_COMMAND = "clear";
#endif
    system(CLEAR_COMMAND);
}
void playerMove(char *spaces, const int size, char player)
{
    int number;
    bool validChoice = false;
    int inputMap[9] =  //Remapped for numpad use
    { 
        6,7,8,      // Inputs 1, 2, 3 → map to board[6], board[7], board[8]
        3,4,5,      // Inputs 4, 5, 6 → map to board[3], board[4], board[5]
        0,1,2       // Inputs 7, 8, 9 → map to board[0], board[1], board[2]
    };

    while (boardNotFull(spaces, size) && !validChoice)
    {
        std::cout << "Choose a spot (1-9): " << "\n";
        std::cin >> number;

        // Invalid - Bad entry not a num
        if (std::cin.fail())
        {
            std::cout << "Invalid Entry!" << "\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }
        // Valid entry
        if (number >= 1 && number <= 9) 
        {
            /*
                Remapping - For Numpad Input Layout

                Example:
                - Player picks 1 bottom-left
                - We -1 from it, so now its 0
                - we pick index 0 out from remap array
                - remap at index 0 contains 6
                - 6 is bottom left index of board

                Mapping Table:
                                
                Player Input      Remap            Board Index
                ------------     -------           ------------
                7  8  9         [6] 7  8            0  1  2      (Top row)
                4  5  6          3  4  5            3  4  5      (Middle row)
               [1] 2  3          0  1  2           [6] 7  8      (Bottom row)

               we minus -1 = 0   index 0 = 6       6 is the actually board spot  
            */

            number--;
            int spot = inputMap[number];
            // Valid - Update board
            if (spaces[spot] == ' ')
            {
                spaces[spot] = player;
                validChoice = true;
            }
            // Invalid - Spot Taken
            else
            {
                std::cout << "Spot already taken!\n";
            }
        }
        // Invalid - Bad entry not between 1-9
        else
        {
            std::cout << "Invalid Entry!\n";
        }
    } 

}
void computerMove(char *spaces, const int size, char computer)
{
    int number;

    while(boardNotFull(spaces, size))
    {
        number = rand() % size;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char* spaces, char player, char computer)
{
    // Row Checks
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        return true;
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        return true;
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        return true;
    }

    // Column Checks
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        return true;
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        return true;
    }

    // Diagonal Checks
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        return true;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        return true;
    }
    else 
    {
        return false;
    }

    
}
bool checkTie(char* spaces, const int size)
{
    for (int i = 0; i < size; i++)
    {
        // Still empty spaces left
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    return true;
}
bool boardNotFull(char *spaces, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (spaces[i] == ' ')
        {
            // Still space left
            return true;  
        }
    }
    // Board is full
    return false;  
}

