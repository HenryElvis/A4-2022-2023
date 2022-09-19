#include "SDLppRenderer.h"
#include "SDLppWindow.h"

SDLppRenderer::SDLppRenderer(SDLppWindow& window)
{
	m_renderer = SDL_CreateRenderer(window.GetWindow(), 0, 0);
}

void SDLppRenderer::SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
}

void SDLppRenderer::Clear()
{
	SDL_RenderClear(m_renderer);
}

void SDLppRenderer::Present()
{
	SDL_RenderPresent(m_renderer);
}

void SDLppRenderer::SetDrawColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
}

SDLppRenderer::~SDLppRenderer()
{
	SDL_DestroyRenderer(m_renderer);
}

SDL_Renderer* SDLppRenderer::GetRenderer()
{
	return m_renderer;
}
