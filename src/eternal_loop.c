#include "endgame.h"

void eternal_loop (t_endgame *t) {
	SDL_Event event;
	_Bool on = 1;
	int x;
	if (Mix_PlayMusic(t->track, 1) < 0)
		get_error();
	while (on == 1) {
		while (SDL_PollEvent(&event)) {
			x = event.motion.x;
			if (event.type == SDL_QUIT)
				on = 0;
		}
		if (t->health > 0)
  		moving(t, x);
		update_window_surface(t);
	}
	SDL_FreeSurface(t->window_surf);
	SDL_DestroyWindow(t->window);
	TTF_CloseFont(t->font);
	TTF_Quit();
	SDL_Quit();
}

