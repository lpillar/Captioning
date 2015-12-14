#ifndef CAPTION_CONTAINER
#define CAPTION_CONTAINER

#include <list>
#include <string>

#include "SDL.h"

#include "MouseHandler.h"
#include "SDLUtility.h"
#include "TextInput.h"

enum captioncontainerflags
{
	DEFAULT,
	DELETE_CAPTION,
	SELECT_CAPTION
};

class CaptionContainer
{
public:
	~CaptionContainer();
	void Init(std::string initialtext, float initialx, float initialy, float initialw, SDL_Rect destrect, int initialfontsize, int id);
	void SetText(std::string newtext, int destinationw);
	void EraseText();
	MouseHandler *CheckMouseEvents(int mouseevent);
	void DeselectCaption();
	void SelectCaption();
	int GetID();
	std::string GetText();
	int EvaluateCaption(bool showcontainer);
	void FitText(std::string texttofit, float destinationw);
private:
	std::string text_;
	float x_, y_, w_;
	int fontsize_;
	int id_;
	SDL_Rect absolutecoordinatesrect_;
	SDL_Color color_;
	std::list<TextInput*> texttextures_;
	bool isselected_;
	MouseHandler containermouseevent_;
	MouseHandler deletebutton_;
	MouseHandler selectbutton_;
}; 

#endif //CAPTION_CONTAINER