/*
** EPITECH PROJECT, 2020
** encrypt.c
** File description:
** asdfqwera
*/

#include <stdlib.h>
#include "include/my.h"

char *sz_cat (char *s, int l)
{
    char *res = malloc (sizeof(char) * (len(s) + l + 1));
    char *rres = res;

    for (; *s; s++) {
        *res = *s;
        res++;
    }
    for (int i = 0; i < l + 1; i++)
        res[i] = 0;
    return rres;
}

void each_column (char *msg, int *inside, int i, int **key, int sqs)
{
    int res = 0;

    if (msg[i]) {
        for (int u = 0; msg[u] && u < sqs; u++)
            res += key[u][i] * msg[u];
        pn (res);
        pc(32);
    } else {
        *inside = 0;
        msg = sz_cat(msg, sqs);
        for (int u = 0; msg[u] && u < sqs; u++)
            res += key[u][i] * msg[u];
        pn (res);
        pc(32);
    }
}

void encrypt(char *msg, int **key, int sqs)
{
    int inside = 1;

    while (inside) {
        for (int i = 0; *msg && i < sqs; i++)
            each_column (msg, &inside, i, key, sqs);
        msg += sqs;
    }
    pc (10);
}
