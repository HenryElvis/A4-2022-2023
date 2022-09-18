#include <SDL.h>
#include "SDLpp.h"
#include "SDLppRenderer.h"
#include "SDLppWindow.h"

SDLpp::SDLpp()
{
	SDL_Init(0);
}

bool SDLpp::PollEvent(SDL_Event* event)
{
	return SDL_PollEvent(event);
}

SDLpp::~SDLpp()
{
	SDL_Quit();
}