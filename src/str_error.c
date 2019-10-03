#include "endgame.h"

void str_error(void) {
	int err = errno;
	printerror(strerror(err));
	exit(err);
}

