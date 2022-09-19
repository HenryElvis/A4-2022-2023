#pragma once
#include<SDL.h>

class SDLpp
{
	public:
		SDLpp::SDLpp();
		static bool PollEvent(SDL_Event* event);

		SDLpp& operator = (const SDLpp&) = delete;

		SDLpp::~SDLpp();
};