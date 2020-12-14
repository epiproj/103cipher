##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## fmieowfno
##

CC     = gcc
CFLAGS = -Wall -Wextra -lmy

SRC = main.c encrypt.c help.c errors.c
BIN = 103cipher

LIB  = ./lib/my


all:
	make -C $(LIB)
	$(CC) $(SRC) -o $(BIN) -L$(LIB) $(CFLAGS)

clean:
	make clean -C $(LIB)
	rm -f $(BIN)

fclean: clean
	make fclean -C $(LIB)

re: fclean all
