#pragma once
#include <SDL.h>

class SDLpp
{
	public:
		SDLpp::SDLpp();
		SDL_Event SDLpp::PollEvent(SDL_Event& event);
		SDLpp::~SDLpp();
};