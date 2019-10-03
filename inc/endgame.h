#ifndef ENDGAME_H
#define ENDGAME_H

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_mixer/SDL_mixer.h>
#include <SDL2_ttf/SDL_ttf.h>

#include <errno.h>
#include <unistd.h>

void random_number(int low, int high, int *res);
void printerror(char *str);
void get_error(void);
void str_error(void);

typedef struct s_img {
	SDL_Rect	rect;
	SDL_Rect	rect2;
	SDL_Rect	rect3;
	SDL_Surface *surf;
} t_img;

typedef struct s_endgame {
	SDL_Surface *window_surf;
	SDL_Surface *game_over;
	SDL_Surface *the_end;
	SDL_Window *window;
	SDL_Surface *text;
	SDL_Surface *wallp;

	Mix_Music *track;
	TTF_Font *font;

	t_img heart;
	t_img fish;
	t_img nut;
	t_img hero;

	int height;
	int step;
	int width;
	int score;
	int health;

} t_endgame;

void update_window_surface(t_endgame *t);
void eternal_loop (t_endgame *t);
void moving(t_endgame *t, int x);
void create_window(t_endgame *t);
void add_life(t_endgame *t);
void coordinates(SDL_Rect *rec, int speed);
_Bool comparison(SDL_Rect a, SDL_Rect b);
void is_caught_someting(t_endgame *t);

#endif

