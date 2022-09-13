#include <SDL.h>
#include "SDLpp.h"
#include "SDLppRenderer.h"
#include "SDLppWindow.h"

SDLpp::SDLpp()
{
	SDL_Init(0);
}

SDL_Event SDLpp::PollEvent(SDL_Event& event)
{
	return event;
}

SDLpp::~SDLpp()
{
	/*
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	*/

	SDL_Quit();
}