#pragma once
#include "SDL.h"
#include "SDLUtility.h"
#include "DebugText.h"

enum mousestate
{
	NO_MOUSE_STATE = -1,
	MOUSEOVER,
	LEFT_BUTTON_DOWN,
	LEFT_BUTTON_UP,
	RIGHT_BUTTON_DOWN,
	RIGHT_BUTTON_UP
};

class MouseHandler {
public:
	void Init(int x, int y, int w, int h);
	void SetEvent(int eventtype);
	int GetEvent();
	void SetMouseArea(int x, int y, int w, int h);
	SDL_Rect *GetMouseArea();
	void ShowMouseArea(SDL_Color setcolor);
	int GetTicks();
	void ResetMouseEvents();
private:
	int mouseevent;
	bool isdown;
	int ticks;
	SDL_Rect mousearea;
};