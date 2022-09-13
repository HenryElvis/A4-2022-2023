#pragma once
#include <SDL.h>

class SDLpp
{
	public:
		SDLpp();
		SDL_Event PollEvent(SDL_Event& event);
		~SDLpp();
};