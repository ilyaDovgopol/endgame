#include "endgame.h"

void is_caught_someting(t_endgame *t) {
	if ((comparison(t->hero.rect, t->fish.rect)) == 1) {
		if (t->health > 0 && (t->fish.rect.y = 851))
			t->health--;
	}
	if ((comparison(t->hero.rect, t->fish.rect2)) == 1) {
		if (t->health > 0 && (t->fish.rect2.y = 851))
			t->health--;
	}
	if ((comparison(t->hero.rect, t->fish.rect3)) == 1)  {
		if (t->health > 0 && (t->fish.rect3.y = 851))
			t->health--;
	}

	if ((comparison(t->hero.rect, t->nut.rect)) == 1) {
		if ((t->nut.rect.y = 851))
			t->score += 7;
	}
	if ((comparison(t->hero.rect, t->nut.rect2)) == 1) {
		if ((t->nut.rect2.y = 851))
			t->score += 7;
	}
	if ((comparison(t->hero.rect, t->nut.rect3)) == 1)  {
		if ((t->nut.rect3.y = 851))
			t->score += 7;
	}
}

