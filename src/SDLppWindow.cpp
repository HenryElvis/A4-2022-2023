#include <iostream>
#include "SDLppWindow.h"

SDLppWindow::SDLppWindow(const std::string& title, int x, int y, int width, int height, Uint32 flag) :
SDLppWindow::SDLppWindow(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED)
{
	m_window = SDL_CreateWindow(title.c_str(), x, y, width, height, flag);
}

SDL_Window* SDLppWindow::GetWindow()
{
	return m_window;
}

SDLppWindow::~SDLppWindow()
{
	SDL_DestroyWindow(m_window);
}
