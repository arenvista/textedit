#include "editor.hpp"
#include <iostream>
#include "file_manager.hpp"

WindowRender::WindowRender(){
    std::cout << "Creating window...\n";
    initscr(); //initalizes screen & sets up memory
    noecho();
    cbreak();
    m_cursor_x = m_cursor_y = 1;
    getbegyx(stdscr, m_start_height, m_start_width); // max top left corner
    getmaxyx(stdscr, m_max_height, m_max_width); //gets height/width
    m_win = newwin(m_max_height, m_max_width, m_start_height, m_start_width);
    refresh();
    box(m_win, 0,0);
    wrefresh(m_win);
    box(m_win, 0,0);
    wrefresh(m_win);
}

WindowRender::~WindowRender(){
    endwin();
}

void WindowRender::moveCursor(size_t x, size_t y){
    move(m_cursor_y+y, m_cursor_x + x);
    m_cursor_y += y;
    m_cursor_x += x;
    printw(".");// prints a string(const char*) to a window
}

void WindowRender::directionalMoveCursor(int keycode){
    switch(keycode){
        case int('j'):
            WindowRender::moveCursor(0,1);
            wrefresh(m_win);
            refresh();
            break;
    }
}
