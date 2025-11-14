#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
    char Replay = 'y';

    while (Replay == 'y' || Replay == 'Y')
    {
        int Time = static_cast<int>(std::time(nullptr));
        int Secret = (Time % 10) + 1;
        int Guess = 0;
        int Attempts = 3;

        std::cout << "\n=== Guess the Number ===\n";
        std::cout << "I'm thinking of a number between 1 and 10.\n";
        std::cout << "You have " << Attempts << " attempts!\n\n";

        for (int Round = 1; Round <= Attempts; ++Round)
        {
            std::cout << "Attempt " << Round << ": Enter your guess: ";
            std::cin >> Guess;

            if (Guess == Secret)
            {
                std::cout << "Winner!\n\n";
                std::cout << "Correct! You guessed the number!\n";
                break;
            }
            
            if (Guess < Secret)
            {
                std::cout << "Too low!\n\n";
            }
            else
            {
                std::cout << "Too high!\n\n";
            }

            if (Round == Attempts)
            {
                std::cout << "Out of attempts! The number was: " << Secret << "\n";
            }
        }

        std::cout << "Play again? (y/n): ";
        std::cin >> Replay;
    }
    
    return 0;
}
