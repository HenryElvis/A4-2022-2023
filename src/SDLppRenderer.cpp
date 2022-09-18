#include "SDLppRenderer.h"
#include "SDLppWindow.h"

SDLppRenderer::SDLppRenderer(SDLppWindow& window)
{
	m_renderer = SDL_CreateRenderer(window.GetWindow(), 0, 0);
}

<<<<<<< HEAD
=======
void SDLppRenderer::SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
}

>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
void SDLppRenderer::Clear()
{
	SDL_RenderClear(m_renderer);
}

void SDLppRenderer::Present()
{
	SDL_RenderPresent(m_renderer);
<<<<<<< HEAD
}

void SDLppRenderer::SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
=======
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
}

SDLppRenderer::~SDLppRenderer()
{
	SDL_DestroyRenderer(m_renderer);
<<<<<<< HEAD
}

SDL_Renderer* SDLppRenderer::GetRenderer()
{
	return m_renderer;
=======
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
}
