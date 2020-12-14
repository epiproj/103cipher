/*
** EPITECH PROJECT, 2020
** ps
** File description:
** asdfqwer
*/

#include <unistd.h>

int len (char *s);

void ps (char *s)
{
    write (1, s, len (s));
}
