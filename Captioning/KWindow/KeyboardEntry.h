 #ifndef KEYBOARD_ENTRY
#define KEYBOARD_ENTRY

#include <string>

#include "TextInput.h"

class KeyboardEntry
{
public:
	enum Key_Macro_Return_Code
	{
		NO_MACRO,
		DELETE_CAPTIONS,
		SET_TEXT_ENGLISH,
		SET_TEXT_JAPANESE,
		TEXT_FINALIZED,
		CREATE_KANJI_TABLE
	};

	enum Key_IME
	{
		ENGLISH,
		JAPANESE
	};

	KeyboardEntry();
	~KeyboardEntry();
	void InsertCharacter(char character);
	void InsertString(std::string string);
	void DeleteCharacter();
	void SetTexture(TextInput *text);
	void SetShift(bool isdown);
	void SetCTRL(bool isdown);
	void FinalizeCurrentText();
	int KeyDownInput(const SDL_Event &e);
	char KeyDownInputEnglish(const SDL_Event &e);
	void KeyDownInputJapaneseHiragana(const SDL_Event &e);
	void KeyDownInputJapaneseKatakana(const SDL_Event &e);
	void KeyUpInput(const SDL_Event &e);
	TextInput *GetTexture();
private:
	TextInput *currenttexttexture_;
	std::string currenttext_;
	std::string tempstring_;
	std::string nexttempchar_;
	bool isshift_;
	bool isctrl_;
	int currentime_;
};

#endif //KEYBOARD_ENTRY