#pragma once
#include <iostream>
#include <string>
#include <SDL.h>

class SDLppWindow
{
	// Constructeur peut appeler un autre constructeur : moins de parametres et moins de lignes
	public:
		SDLppWindow(
			const std::string& title,
			int x,
			int y,
			int width,
			int height,
			Uint32 flag = 0);

		SDLppWindow(
			const std::string& title,
			int x,
			int y,
			int width,
			int height,
			Uint32 flag = 0);
		
		// Empeche construction par copie

		SDLppWindow(const SDLppWindow&) = delete;

		// Empeche operation d'affectation par copie

		SDLppWindow& operator = (const SDLppWindow&) = delete;

		SDL_Window* GetWindow();
		~SDLppWindow();

	private:
		SDL_Window* m_window;
};