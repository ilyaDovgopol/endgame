#include "endgame.h"

void moving(t_endgame *t, int x) {
	if (x > (t->width - 64))
		x = t->width - 64;
	if (x < 64)
		x = 64;
	t->hero.rect.x = x - 64; // центрирование картинки с мышкой

	if (t->step == 1) {
		is_caught_someting(t);

		coordinates(&t->nut.rect, 1);
		coordinates(&t->fish.rect, 2);

		coordinates(&t->nut.rect2, 3);
		coordinates(&t->fish.rect2, 4);

		coordinates(&t->nut.rect3, 5);
		coordinates(&t->fish.rect3, 6);
	}
}

