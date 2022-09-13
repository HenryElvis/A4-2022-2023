#pragma once

class SDLpp
{
	public:
		SDLpp();
		void PollEvent(SDL_Event event);
		~SDLpp();
};