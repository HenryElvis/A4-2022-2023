#include "SDLppSurface.h"
#include <iostream>

SDLppSurface::SDLppSurface(const std::string& file)
{
	m_surface = IMG_Load(file);
}

SDLppSurface::~SDLppSurface()
{
	SDL_FreeSurface(m_surface);
}