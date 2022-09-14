#pragma once

class SDLpp
{
	public:
		SDLpp::SDLpp();
		static bool PollEvent(SDL_Event* event);
		SDLpp::~SDLpp();
};