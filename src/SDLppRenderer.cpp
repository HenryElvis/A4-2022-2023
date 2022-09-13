#include <SDL.h>
#include <iostream>
#include "SDLppRenderer.h"

SDLppRenderer::SDLppRenderer(SDL_Window window)
{
	SDL_Renderer* renderer = SDL_CreateRenderer(&window);
}

SDLppRenderer::~SDLppRenderer()
{

}
