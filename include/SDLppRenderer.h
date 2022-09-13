#pragma once
#include <iostream>
#include <SDL.h>

class SDLppRenderer
{
	public:
		SDL_Window wind;

		SDLppRenderer(SDL_Window window)
		{
			wind = window;
		}

		~SDLppRenderer();
};