##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## fmieowfni
##

CC = gcc
CCFLAGS = -Wall -Wextra

SRC = len.c pc.c ps.c pn.c c_isn.c gn.c

all:
	mkdir -p ../../include
	$(CC) -c $(SRC) $(CCFLAGS)
	ar cr libmy.a *.o
	cp libmy.a ../
	cp my.h ../../include/

clean:
	rm -f *.o
	rm -f *~
	rm -f *.a

fclean: clean
	rm -f ../*.a

re: fclean all
