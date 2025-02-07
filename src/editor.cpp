#include "editor.hpp"
#include <iostream>
#include "file_manager.hpp"

WindowRender::WindowRender(){
    std::cout << "Creating window...\n";
    initscr(); //initalizes screen & sets up memory
    noecho();
    cbreak();
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
