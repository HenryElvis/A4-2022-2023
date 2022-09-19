#pragma once
#include <SDL.h>

class SDLppSurface
{
	public:
		SDLppSurface(const std::string& file);
		// SDLppSurface(const SDLppSurface&) = delete;

		~SDLppSurface();

		SDLppSurface& operator=(const SDLppSurface&) = delete;

	private:

		SDL_Surface* m_surface;
};