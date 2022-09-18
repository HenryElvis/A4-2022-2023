#pragma once
#include <iostream>
#include <SDL.h>
#include <string>

class SDLppWindow
{
	public:
		SDLppWindow(
			const std::string& title,
			int width,
			int height,
			Uint32 flag = 0);

		SDLppWindow(
			const std::string& title,
			int x,
			int y,
			int width,
			int height,
			Uint32 flag = 0
		);

		SDLppWindow(const SDLppWindow&) = delete;

		~SDLppWindow();

		SDL_Window* GetWindow();

		SDLppWindow& operator=(const SDLppWindow&) = delete;

	private:
		SDL_Window* m_window;
};