#include "endgame.h"

void coordinates(SDL_Rect *rec, int speed) {
	rec->y = (rec->y > 850) ? 0 : rec->y + speed;
	if (rec->y == 0)
		random_number(0, 1375, &rec->x);
}

