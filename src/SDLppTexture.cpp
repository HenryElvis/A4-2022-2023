#include "SDLppTexture.h"
#include "SDLppRenderer.h"
#include <SDL_image.h>

SDLppTexture SDLppTexture::LoadFromFile(const std::string& filepath)
{
	SDL_Surface* surface = IMG_Load(filepath.c_str());

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer.GetRenderer(), surface);

	SDL_FreeSurface(surface);

	return SDLppTexture(texture);
}
