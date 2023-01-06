#pragma once

enum state
{
    playing,
    completed
};

class game
{
    public:
        int number_to_guess;
        int guess_count;
        bool continue_playing;
        state state;

        game();
        void check_guess();
        void rematch();
        void reset();
};