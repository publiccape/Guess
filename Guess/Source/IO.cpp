#include "../Header/IO.h"
#include <iostream>

// Writes a message to the console.

void io::write(const std::string message)
{
    std::cout << message << std::endl;
}


// Reads user input is a character.

char io::read_letter()
{
    char letter;
    std::cin >> letter;

    return letter;
}


// Checks user input is a number and returns 0 if false.

int io::read_number()
{
    std::string numbers;
    std::cin >> numbers;

    for (const char number : numbers)
    {
        if (isdigit(number) == 0)
            return 0;
    }

    return std::stoi(numbers);
}


// Clears the console of all previous text.

void io::clear()
{
    system("cls");
}