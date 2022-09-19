#pragma once
#include <string>
#include <SDL_image.h>

class SDLppRenderer;

class SDLppTexture
{
	public:
		SDLppTexture(const SDLppTexture&) = delete;
		~SDLppTexture();

		SDLppTexture& operator=(const SDLppTexture&) = delete;

		static SDLppTexture LoadFromFile(const std::string& filepath);

	private:
		SDLppTexture(SDL_Texture* texture);

		SDL_Texture* m_texture;
};