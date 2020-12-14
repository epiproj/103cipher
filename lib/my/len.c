/*
** EPITECH PROJECT, 2020
** len
** File description:
** asdfg
*/

int len (char *s)
{
    int i = 0;

    for (; s[i]; i++);
    return i;
}
