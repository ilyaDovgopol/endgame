#include "endgame.h"

_Bool comparison(SDL_Rect a, SDL_Rect b) {
	_Bool x = 0;
	_Bool y = 0;
	if (a.x <= b.x && a.x + a.w >= b.x)
		x = 1;
	if (a.x >= b.x && a.x + a.w <= b.x + b.w)
		x = 1;
	if (a.x <= b.x + b.w && a.x + a.w >= b.x + b.w)
		x = 1;
	if (a.y <= b.y && a.y + a.h >= b.y)
		y = 1;
	if (a.y >= b.y && a.y + a.h <= b.y + b.h)
		y = 1;
	if (a.y <= b.y + b.h && a.y + a.h >= b.y + b.h)
		y = 1;
	if (x == 1 && y == 1)
		return (1);
	return (0);
}

