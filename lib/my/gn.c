/*
** EPITECH PROJECT, 2020
** gn
** File description:
** zxcv
*/

#include "my.h"

int gn_pos(char *s)
{
    int r = 0;

    for (; c_isn(*s); s++) {
        for (int u = 10; u > 0; u--)
            if (((u * r) + *s - 48) < 0)
                return (0);
        r = (10 * r) + *s - 48;
    }
    return (r);
}

int gn_neg(char *s)
{
    int r = 0;

    for (; c_isn(*s); s++) {
        for (int u = 10; u > 0; u--)
            if (u * r - (*s - 48))
                return (0);
        r = (10 * r) - *s + 48;
    }
    return (r);
}

int gn(char *s)
{
    int n = 1;

    while (*s == ' ')
        s++;
    for (; *s == 45 || *s == '+'; s++)
        if (*s == 45)
            n = -n;
    if (n == -1)
        return (gn_neg(s));
    return (gn_pos(s));
}
