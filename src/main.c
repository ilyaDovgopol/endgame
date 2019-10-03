#include "endgame.h"

int main() {
	t_endgame *t = (t_endgame*)malloc(sizeof(t_endgame));
	create_window(t);

	random_number(0, 1400, &t->nut.rect.x);
	random_number(0, 1400, &t->fish.rect.x);

	random_number(0, 1400, &t->nut.rect2.x);
	random_number(0, 1400, &t->fish.rect2.x);

	random_number(0, 1400, &t->nut.rect3.x);
	random_number(0, 1400, &t->fish.rect3.x);
	t->health = 10;
	t->score = 0;
	t->step = 1;

	update_window_surface(t);
	eternal_loop(t);
	return 0;
}

