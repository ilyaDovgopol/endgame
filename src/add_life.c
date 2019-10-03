#include "endgame.h"

void add_life(t_endgame *t) {
	t->heart.rect = t->heart.surf->clip_rect;
	for (int i = 0; i < t->health; i++) {
		SDL_BlitSurface(t->heart.surf, NULL, t->window_surf, &t->heart.rect);
		t->heart.rect.x += 45;
	}
	char str[30];
	SDL_Color color = { 255, 215, 0, 0 };
	t->text = TTF_RenderText_Solid(t->font, SDL_itoa(t->score, str, 10), color);
	SDL_Rect nbr = t->text->clip_rect;
	nbr.x = 660;
	SDL_BlitSurface(t->text ,NULL, t->window_surf, &nbr);
	if (t->health <= 0) {
		t->game_over = TTF_RenderText_Solid(t->font, "Oops... Don't give up!", color);
		nbr.x = 500;
		nbr.y = 150;
		SDL_BlitSurface(t->the_end ,NULL, t->window_surf, NULL);
		SDL_BlitSurface(t->game_over ,NULL, t->window_surf, &nbr);
	}
}

