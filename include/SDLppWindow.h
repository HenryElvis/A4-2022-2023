#pragma once
#include <iostream>
#include <string>
#include <SDL.h>

class SDLppWindow
{
public:
	SDLppWindow(
		const std::string& title,
		int x,
		int y,
		int width,
		int height,
		Uint32 flag);

	SDL_Window* GetWindow();
	~SDLppWindow();

private:
	SDL_Window* m_window;
};