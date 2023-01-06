#include "../Header/Game.h"
#include "../Header/Console.h"
#include <cstdlib>

//  The constructor resets all the values to default.

game::game()
{
    reset();
}


//  checks the current guess with the right answer.

void game::check_guess()
{
    const int number = console::read_number();
    
    if (number == number_to_guess)
    {
        console::write_win(guess_count);
        state = completed;
        return;
    }

    (number < number_to_guess) ? console::write_higher() : console::write_lower();
    guess_count++;
}


// Allows the user to play again or quit the game.

void game::rematch()
{
    if (console::read_letter() == 'y')
    {
        reset();
        return;
    }
    
    console::write_quit();
    continue_playing = false;
}


// resets all the values to default.

void game::reset()
{
    number_to_guess = rand() % 100;
    guess_count = 0;
    continue_playing = true;
    state = playing;

    console::write_rules();
}