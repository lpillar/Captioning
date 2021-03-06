#include <iostream>
#include <string>

#include "SDL.h"

#include "StoredCaptionContainer.h"
#include "StoredCaptionScreen.h"

StoredCaptionScreen::StoredCaptionScreen(SDL_Rect setscreenarea)
{
	screenarea_ = setscreenarea;
	testcaption_ = new StoredCaptionContainer(SDL_Rect{ screenarea_.x, screenarea_.y, StoredCaptionContainer::STANDARD_STORED_CONTAINER_WIDTH, StoredCaptionContainer::STANDARD_STORED_CONTAINER_HEIGHT }, 0);
	testcaption_->SetText(0, "nofile.txt", u8"同じ化合物であれば、成分元素の質量比はつねに一定であり、これを定比例の法則と言い", "A compound can be converted to a different chemical composition by interaction with a second chemical compound via a chemical reaction. In this process, bonds between atoms are broken in both of the interacting compounds, and then bonds are reformed so that new associations are made between atoms.");
}

int StoredCaptionScreen::Show()
{
	testcaption_->Show();

	return 0;
}
