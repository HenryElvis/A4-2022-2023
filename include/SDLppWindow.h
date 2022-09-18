#pragma once
#include <iostream>
<<<<<<< HEAD
#include <SDL.h>
#include <string>
=======
#include <string>
#include <SDL.h>
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634

class SDLppWindow
{
	public:
		SDLppWindow(
			const std::string& title,
<<<<<<< HEAD
			int width,
			int height,
			Uint32 flag = 0);

		SDLppWindow(
			const std::string& title,
=======
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
			int x,
			int y,
			int width,
			int height,
<<<<<<< HEAD
			Uint32 flag = 0
		);

		SDLppWindow(const SDLppWindow&) = delete;

		~SDLppWindow();

		SDL_Window* GetWindow();

		SDLppWindow& operator=(const SDLppWindow&) = delete;

=======
			Uint32 flag);
			
		SDL_Window* GetWindow();
		~SDLppWindow();

>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
	private:
		SDL_Window* m_window;
};