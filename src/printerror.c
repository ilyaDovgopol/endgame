#include "endgame.h"

void printerror(char *str) {
	write(2, "endgame: ", 9); //приставка к error
	for (int i = 0; str[i] != '\0'; i++)
		write(2, &str[i], 1); //error
	write(2, "\n", 1);
}

