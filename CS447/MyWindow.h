#ifndef MY_WINDOW_H
#define MY_WINDOW_H

#include <Fl/Fl_Window.h>

class MyWindow : public Fl_Window
{
public:
	MyWindow(int width, int height, const char* title);
	virtual ~MyWindow();
};

#endif