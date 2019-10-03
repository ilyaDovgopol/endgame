#include "endgame.h"

void create_window(t_endgame *t) {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		get_error();
	t->width = 1440;
	t->height = 900;
	t->window = SDL_CreateWindow("endgame marathon", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, t->width, t->height, SDL_WINDOW_ALLOW_HIGHDPI);
	if (t->window == NULL) 
	    get_error();
	if ((t->window_surf = SDL_GetWindowSurface(t->window)) == NULL) //головний сурфейс
		get_error();
	if ((t->wallp = IMG_Load("./res/img/wallpaper.png")) == NULL) //заставка
		get_error();
	if ((t->the_end = IMG_Load("./res/img/the_end.png")) == NULL) //заставка
		get_error();
	if ((t->hero.surf = IMG_Load("./res/img/hero.png")) == NULL)
		get_error();
	if ((t->nut.surf = IMG_Load("./res/img/nut.png")) == NULL)
		get_error();
	if ((t->fish.surf = IMG_Load("./res/img/badfish.png")) == NULL)
		get_error();
	if ((t->heart.surf = IMG_Load("./res/img/life.png")) == NULL)
		get_error();
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024) == -1)
		get_error();
	if ((t->track = Mix_LoadMUS("./res/track/Melody in C with Erica Chao.mp3")) == NULL)
		get_error();
	t->hero.rect.y = 770; //опустили squirrel по у
	if(TTF_Init() == -1)
		get_error();
	if((t->font = TTF_OpenFont("./res/font/17850.ttf", 30)) == NULL)
		get_error();
}

