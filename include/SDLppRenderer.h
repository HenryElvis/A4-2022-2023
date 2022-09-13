#pragma once
#include <iostream>
#include <SDL.h>

class SDLppRenderer
{
	public:
		SDL_Window* wind;
		SDL_Renderer* renderer;

		SDLppRenderer::SDLppRenderer(SDL_Window* window)
		{
			wind = window;
		}

		void SetDrawColor(int r, int g, int b, int a);
		void Clear();
		void Present();

		SDLppRenderer::~SDLppRenderer();
};