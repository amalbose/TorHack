/*************************************************************************************
 *   Created on: Apr 6, 2013
 *
 *	TorHack - http://axatrikx.com
 *	Copyright (C) 2013  Amal Bose
 *
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************************************************/

#include <SDL.h>
#include <iostream>

int main(int argc, char** argv) {

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Surface *screen;

	screen = SDL_SetVideoMode(1200, 600, 32, SDL_SWSURFACE);
//      screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE|SDL_FULLSCREEN);
	bool running = true;
	const int FPS = 30;
	Uint32 start;
	SDL_Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.w = 200;
	rect.h = 200;
	Uint32 color = SDL_MapRGB(screen->format, 0xff, 0xff, 0xff);
	Uint32 color2 = SDL_MapRGB(screen->format, 10, 220, 101);
	std::cout << "isdn";
	while (running) {
		start = SDL_GetTicks();
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_QUIT:
				running = false;
				break;
			}
			if (event.key.keysym.sym == SDLK_UP) {
				rect.y = rect.y - 10;
			}
			if (event.key.keysym.sym == SDLK_DOWN) {
				rect.x = rect.x + 10;
			}
		}
		//logic && render

		SDL_FillRect(screen, &screen->clip_rect, color);
		SDL_FillRect(screen, &rect, color2);
		SDL_Flip(screen);

		if (1000 / FPS > SDL_GetTicks() - start) {
			SDL_Delay(1000 / FPS - (SDL_GetTicks() - start));
		}
	}
	SDL_Quit();
	return 0;
}
