#include "Header/Game.h"

int main()
{
    game game;
    
    while (game.continue_playing)
    {
        switch (game.state)
        {
            case playing:
                game.check_guess();
                break;

            case completed:
                game.rematch();
                break;
        }
    }
}