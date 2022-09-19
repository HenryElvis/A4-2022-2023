#pragma once
#include<SDL.h>

class SDLpp
{
	public:
<<<<<<< HEAD
		SDLpp();
		static bool PollEvent(SDL_Event* event);
		~SDLpp();
=======
		SDLpp::SDLpp();
		static bool PollEvent(SDL_Event* event);

		SDLpp& operator = (const SDLpp&) = delete;

		SDLpp::~SDLpp();
>>>>>>> 3f9c37a99fbaf1394ef2626a156423d08fef9634
};