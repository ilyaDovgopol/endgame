#include "endgame.h"

void update_window_surface(t_endgame *t) {

	SDL_BlitSurface(t->wallp ,NULL, t->window_surf, NULL); // распечатай background
	SDL_BlitSurface(t->hero.surf, NULL, t->window_surf, &t->hero.rect); // print squirrel
	add_life(t);
	if (t->health > 0) {
		SDL_BlitSurface(t->nut.surf, NULL, t->window_surf, &t->nut.rect); // что куда где nut
		SDL_BlitSurface(t->fish.surf, NULL, t->window_surf, &t->fish.rect); // что куда где	fish
		SDL_BlitSurface(t->nut.surf, NULL, t->window_surf, &t->nut.rect2); // что куда где 2 nut
		SDL_BlitSurface(t->fish.surf, NULL, t->window_surf, &t->fish.rect2); // что куда где 2 fish
		SDL_BlitSurface(t->nut.surf, NULL, t->window_surf, &t->nut.rect3); // что куда где 3 nut
		SDL_BlitSurface(t->fish.surf, NULL, t->window_surf, &t->fish.rect3); // что куда где 3 fish
	}
	SDL_UpdateWindowSurface(t->window); // фото в рамку
}

