#include "SDLppTexture.h"
#include "SDLppRenderer.h"
#include "SDLppSurface.h"
#include <SDL_image.h>

SDLppTexture::SDLppTexture(SDLppTexture&& texture)
{
	m_texture = texture.m_texture;
	texture.m_texture = nullptr;
}

SDLppTexture::~SDLppTexture()
{
	if (m_texture)
		SDL_DestroyTexture(m_texture);
}

SDL_Texture* SDLppTexture::GetTexture()
{
	return m_texture;
}

SDLppTexture SDLppTexture::LoadFromFile(SDLppRenderer& renderer, const std::string& filepath)
{
	// SDL_Surface* surface = IMG_Load(filepath.c_str());

	SDLppSurface surface(filepath.c_str());

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer.GetRenderer(), surface);
	//SDL_FreeSurface(surface);

	return SDLppTexture(texture);
}

SDLppTexture::SDLppTexture(SDL_Texture* texture) :
	m_texture(texture)
{

}