#pragma once
#include <ncurses.h>

struct Event{
    int code;
    char c;

    Event(int code);
};

enum KeyCode{
    BACKSPACE = 32, 
    ENTER = 127,
    //More keycodes
};
struct KeyEvent{
    int keyCode;
    int modifiers;
    int eventKind;
    int eventState;
    char keyChar;
    void matchEvent(int event);
};

class WindowRender{
    //Window Params
    int m_cursor_x;
    int m_cursor_y;
    int m_max_height;
    int m_max_width;
    int m_start_height;
    int m_start_width;
    WINDOW* m_win;
public:
    WindowRender();
    ~WindowRender();
    void moveCursor(size_t x, size_t y);
    void directionalMoveCursor(int keycode);
};


int readEvent();
void initTermios(int echo);
void resetTermios();
void runEditor();
