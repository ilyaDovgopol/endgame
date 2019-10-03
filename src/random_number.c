#include "endgame.h"

void random_number(int low, int high, int *res) {
	int range = high - low;
	*res = (int)((rand() / (float)(RAND_MAX)) * range) + low;
}

