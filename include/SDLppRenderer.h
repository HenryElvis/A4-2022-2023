#pragma once
#include <SDL.h>

class SDLppWindow;

class SDLppRenderer
{
	public:

		SDLppRenderer::SDLppRenderer(SDLppWindow& window);

		void Clear();
		void Present();
		void SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
		SDL_Renderer* GetRenderer();

		SDLppRenderer& operator = (const SDLppRenderer&) = delete;

		SDLppRenderer::~SDLppRenderer();

	private :
		SDL_Renderer* m_renderer;
};