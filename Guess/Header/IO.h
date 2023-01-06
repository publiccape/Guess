#pragma once
#include <string>

class io
{
    public:
    static void write(std::string message);
    static char read_letter();
    static int read_number();
    static void clear();
};