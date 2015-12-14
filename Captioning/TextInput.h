#ifndef TEXT_INPUT
#define TEXT_INPUT

#include <string>

#include "SDL.h"
#include "SDL_ttf.h"

class TextInput
{
public:
	TextInput();
	~TextInput();
	int Init(std::string ttffilepath, int fontsize);
	void CreateTextureFromText(std::string text);
	void CreateTextureFromText(std::wstring text);
	void CreateQuickTextureFromText(std::string text);
	SDL_Texture *GetTexture();
	int GetWidth();
	int GetHeight();
	std::string GetCurrentText();
	std::wstring GetCurrentUnicodeText();
	void DestroyTexture();
	int TextWidth(std::string text);
	int TextHeight();
private:
	SDL_Texture *texture_;
	TTF_Font *font_;
	std::string currenttext_;
	std::wstring currentunicodetext_;
	int imagewidth_;
	int imageheight_;
};

#endif //TEXT_INPUT