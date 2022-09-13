#include <SDL.h>
#include <iostream>
#include "SDLppRenderer.h"

SDLppRenderer::SDLppRenderer(SDL_Window* window)
{
	renderer = SDL_CreateRenderer(window, 0, 0);
}

void SDLppRenderer::SetDrawColor(int r, int g, int b, int a)
{
	SDL_SetRenderDrawColor(renderer, r, g, b, a);
}

void SDLppRenderer::Clear()
{
	SDL_RenderClear(renderer);
}

void SDLppRenderer::Present()
{
	SDL_RenderPresent(renderer);
}

SDLppRenderer::~SDLppRenderer()
{

}
