#pragma once
#include <SDL.h>

class SDLppWindow;

class SDLppRenderer
{
	public:
<<<<<<< HEAD
		SDLppRenderer(SDLppWindow& window);

		SDLppRenderer(const SDLppRenderer&) = delete;
		
		void Clear();
		void Present();
		void SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);

		~SDLppRenderer();

		SDL_Renderer* GetRenderer();
		SDLppRenderer& operator=(const SDLppRenderer&) = delete;

	private:
=======

		SDLppRenderer::SDLppRenderer(SDLppWindow& window);

		void Clear();
		void Present();
		void SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);

		SDLppRenderer::~SDLppRenderer();

	private :
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
		SDL_Renderer* m_renderer;
};