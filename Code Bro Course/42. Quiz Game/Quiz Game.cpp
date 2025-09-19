#include <iostream>

int main()
{
    std::string questions[] = 
    {
        "1. What year was C++ created?",
        "2. Who invented C++?",
        "3. What is the predecessors of C++?",
        "4. Is the Earth Flat?"
    };

    std::string options[][4] =
    {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}
    };

    char answerKey[] = { 'C', 'B', 'A', 'B' };

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    // Loop for amount of questions
    for (int i = 0; i < size; i++) 
    {
        // Display Question
        std::cout << "**********************************" << "\n";
        std::cout << questions[i] << "\n";
        std::cout << "----------------------------------" << "\n";

        //  Loop for the amount of options     Size of Rows / Size of a column
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << "\n";
        }

        // Take input, and convert to upper
        std::cin >> guess;
        guess = toupper(guess);

        // Correct 
        if (guess == answerKey[i])
        { 
            std::cout << "CORRECT!\n";
            score++;
        }
        // Incorrect
        else 
        {
            std::cout << "WRONG!\n";
            std::cout << "Answer:\t" << answerKey[i] << '\n';
        }

        std::cout << '\n';
    }

    std::cout << "\n==================================" << "\n";
    std::cout << "Results:\t" << score << "/" << size << '\n';
    std::cout << "Score:\t\t" << (score / (double)size) * 100 << "% " << '\n';
    std::cout << "==================================" << "\n";

    return 0;
}

