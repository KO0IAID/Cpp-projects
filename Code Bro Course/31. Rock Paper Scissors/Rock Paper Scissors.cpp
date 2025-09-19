#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You chose:\t\t";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice:\t";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}

char getUserChoice()
{
    char player;

    std::cout << "Rock-Paper-Scissors Game!\n";
    std::cout << "Choose one of the following:\n";
    std::cout << "*************************\n";
    std::cout << "Rock\t\t=\t'r'\n" << "Paper\t\t=\t'p'\n" << "Scissors\t=\t's'\n";

    do 
    {
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
        case 1:
            return 'r';
            break;
        case 2:
            return 'p';
            break;
        case 3:
            return 's';
            break;
    }

    return 0;
}
void showChoice(char choice)
{
    switch (choice) 
    {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player) 
    {
    case 'r':
        if (computer == 'r')
            std::cout << "Draw!\n";
        else if (computer == 'p')
            std::cout << "Computer wins. Paper Covers Rock!\n";
        else if (computer == 's')
            std::cout << "Player wins. Rock breaks Scissors!\n";
        break;
    case 'p':
        if (computer == 'r')
            std::cout << "Player wins. Paper covers rock!\n";
        else if (computer == 'p')
            std::cout << "Draw!\n";
        else if (computer == 's')
            std::cout << "Computer wins. Scissors cut paper!\n";
        break;
    case 's':
        if (computer == 'r')
            std::cout << "Computer wins. Rock breaks scissors!\n";
        else if (computer == 'p')
            std::cout << "Player wins. Scissors cut paper!\n";
        else if (computer == 's')
            std::cout << "Draw!\n";
        break;

    }
}

