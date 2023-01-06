#include "../Header/Console.h"
#include "../Header/IO.h"

// Writes a message to the console explaining the rules.

void console::write_rules()
{
    io::clear();
    io::write("Guess a number between 0 and 99");
}


// Writes a message to the console congratulating the winner.

void console::write_win(const int counter)
{
    io::clear();
    io::write("Correct!! Congratulations you won the game.");
    io::write(std::to_string(counter) + " guesses was used. \n");
    io::write("Do you want to play again? (y/n)");
}


// Writes a message to the console with a hint.

void console::write_higher()
{
    io::clear();
    io::write("My number is higher, try again.");
}


// Writes a message to the console with a hint.

void console::write_lower()
{
    io::clear();
    io::write("My number is lower, try again.");
}


// Writes a message to the console on quiting.

void console::write_quit()
{
    io::clear();
    io::write("Thank you for playing");
}


// Reads user input is a character.

char console::read_letter()
{
    return io::read_letter();
}


// Reads user input is a number.

int console::read_number()
{
    return io::read_number();
}