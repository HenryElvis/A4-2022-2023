#pragma once
#include <iostream>

class SDLppWindow
{
	public:
		const char* titleWindow;
		int posX;
		int posY;
		int ratioX;
		int ratioY;
		int flag;
		
		SDLppWindow(
			const char* title,
			int x,
			int y,
			int z,
			int h,
			int w)
		{
			titleWindow = title;
			posX = x;
			posY = y;
			ratioX = z;
			ratioY = h;
			flag = w;
		}

		~SDLppWindow();
};