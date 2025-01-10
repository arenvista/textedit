#include <iostream>
#include <unistd.h>
#include <termios.h>
#include "editor.hpp"


int main(void)
{
    char c;
    initTermios(0);
    while (1) { 
        c = readEvent();
        if (c=='q'){break;}
        std::cout << "ASCII Char: " << int(c) << " Char: " << c << std::endl;
    }
}
