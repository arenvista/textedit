#pragma once

struct Event{
    int code;
    char c;

    Event(int code);
};

enum KeyCode{
    BACKSPACE = 0, 
    ENTER = 1,
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

int readEvent();

void initTermios(int echo);
void resetTermios(void);
