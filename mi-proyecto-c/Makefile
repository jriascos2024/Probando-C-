# Makefile

CC=gcc
CFLAGS=-Iinclude -Wall
SRC=src/main.c src/lib/utils.c
OBJ=$(SRC:.c=.o)
EXEC=mi_proyecto

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean