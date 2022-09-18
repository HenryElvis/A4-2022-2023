#pragma once
#include <SDL.h>

class SDLppWindow;

class SDLppRenderer
{
	public:
		SDLppRenderer(SDLppWindow& window);

		SDLppRenderer(const SDLppRenderer&) = delete;
		
		void Clear();
		void Present();
		void SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);

		~SDLppRenderer();

		SDL_Renderer* GetRenderer();
		SDLppRenderer& operator=(const SDLppRenderer&) = delete;

	private:
		SDL_Renderer* m_renderer;
};