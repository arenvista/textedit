#include <iostream>
#include <unistd.h>
#include <termios.h>
#include "editor.hpp"


int main(void)
{
    WindowRender win;
    win.moveCursor(1, 1);
    while(true){
        int res = int(getch());
        win.directionalMoveCursor(res);
    }
}
