CC = clang
CFLAGS = -Wall -Wextra -Werror -std=c11 -pedantic

all: main

main: main.c

.PHONY: clean
clean: 
	- rm main
