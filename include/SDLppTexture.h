#pragma once

#include <SDL.h>
#include <string>

class SDLppRenderer;

class SDLppTexture
{
public:
	SDLppTexture(SDLppTexture&& texture);
	SDLppTexture(const SDLppTexture&) = delete;
	~SDLppTexture();

	SDL_Texture* GetTexture();

	SDLppTexture& operator=(const SDLppTexture&) = delete;

	static SDLppTexture LoadFromFile(SDLppRenderer& renderer, const std::string& filepath);

private:
	SDLppTexture(SDL_Texture* texture);

	SDL_Texture* m_texture;
};