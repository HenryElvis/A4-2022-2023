#include <iostream>
#include <SDL.h>
#include "SDLppWindow.h"

SDLppWindow::SDLppWindow(const char* title, int x, int y, int z, int h, int w)
{
	SDL_Window* window = SDL_CreateWindow(title, x, y, z, h, w);

	std::cout << "Constructor Window" << std::endl;
}

SDLppWindow::~SDLppWindow()
{
	std::cout << "Destructor Window" << std::endl;
}
