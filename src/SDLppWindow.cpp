<<<<<<< HEAD
#include "SDLppWindow.h"

SDLppWindow::SDLppWindow(const std::string& title, int width, int height, Uint32 flag) : 
	SDLppWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flag)
{

}

SDLppWindow::SDLppWindow(const std::string& title, int x, int y, int width, int height, Uint32 flag)
{
	m_window = SDL_CreateWindow(title.c_str(), x, y, width, height, flag);
}

=======
#include <iostream>
#include "SDLppWindow.h"

SDLppWindow::SDLppWindow(const std::string& title, int x, int y, int width, int height, Uint32 flag)
{
	m_window = SDL_CreateWindow(title.c_str(), x, y, width, height, flag);
}

>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
SDL_Window* SDLppWindow::GetWindow()
{
	return m_window;
}

SDLppWindow::~SDLppWindow()
{
	SDL_DestroyWindow(m_window);
<<<<<<< HEAD
}
=======
}
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
