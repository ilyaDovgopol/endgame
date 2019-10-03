#include "endgame.h"

void get_error(void) {
	printerror((char*)SDL_GetError());
	exit(2);
}

