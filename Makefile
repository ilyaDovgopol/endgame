NAME = endgame

SRC = src/main.c \
	src/create_window.c \
	src/printerror.c \
	src/str_error.c \
	src/get_error.c \
	src/update_window_surface.c \
	src/add_life.c \
	src/eternal_loop.c \
	src/random_number.c \
	src/coordinates.c \
	src/comparison.c \
	src/is_caught_someting.c \
	src/moving.c

INC = inc/endgame.h

CFILES = main.c \
	create_window.c \
	printerror.c \
	str_error.c \
	get_error.c \
	update_window_surface.c \
	add_life.c \
	eternal_loop.c \
	random_number.c \
	coordinates.c \
	comparison.c \
	is_caught_someting.c \
	moving.c

HFILES = endgame.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
DFLAGS = -fsanitize=address -g
RFLAGS = -Ofast

FFLAGS =  -I ./res/frameworks/SDL2.framework/Versions/A/Headers \
          -F ./res/frameworks -framework SDL2 -rpath ./res/frameworks \
          -I ./res/frameworks/SDL2_image.framework/Versions/A/Headers \
          -F ./res/frameworks -framework SDL2_image -rpath ./res/frameworks \
          -I ./res/frameworks/SDL2_mixer.framework/Versions/A/Headers \
          -F ./res/frameworks -framework SDL2_mixer -rpath ./res/frameworks \
          -I ./res/frameworks/SDL2_ttf.framework/Versions/A/Headers \
          -F ./res/frameworks -framework SDL2_ttf -rpath ./res/frameworks

all: install clean
dbg: debug clean
release: build clean

install:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAGS) $(FFLAGS) -o $(NAME) $(CFILES)
debug:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAGS) $(FFLAGS) $(DFLAGS) -o $(NAME) $(CFILES)
build:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAGS) $(FFLAGS) $(RFLAGS) -o $(NAME) $(CFILES)
clean:
	@rm -rf $(CFILES)
	@rm -rf $(HFILES)
	@rm -rf endgame.dSYM
uninstall: clean
	@rm -rf $(NAME)
reinstall: uninstall all

