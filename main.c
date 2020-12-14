/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** asdfqwerasdfqwer
*/

#include <stdlib.h>
#include "include/my.h"

void encrypt(char *msg, int **key, int sqs);
int display_help(void);
int check_err (int argc, char *argv[]);

int gb (int **key, int sqs)
{
    int res = 0;

    for (int i = 0; i < sqs; i++)
        for (int u = 0; u < sqs; u++)
            if (key[i][u] > res)
                res = key[i][u];
    return res;
}

int get_pow (int num)
{
    int res = 0;

    if (!num)
        num = 1;
    for (; num; res++)
        num /= 10;
    return res;
}

void pb (int **key, int sqs, int l)
{
    int spaces;

    for (int i = 0; i < sqs; i++) {
        for (int u = 0; u < sqs; u++) {
            pn (key[i][u]);
            ps("     ");
            spaces = get_pow(l) - get_pow(key[i][u]);
            for (int i = spaces; i; i--)
                pc(32);
        }
        pc(10);
    }
}

int **make_key (int sqs, char *keystr)
{
    int **key = malloc (sizeof(int) * sqs);

    for (int i = 0; i < sqs; i++)
        key[i] = malloc(sizeof(int) * sqs);
    for (int i = 0; i < sqs; i++) {
        for (int u = 0; u < sqs; u++)
            if (*keystr) {
                key[i][u] = *keystr;
                keystr++;
            } else {
                key[i][u] = 0;
            }
    }
    pb(key, sqs, gb(key, sqs));
    return key;
}

int main (int argc, char *argv[])
{
    int keyl;
    char *msg;
    char *keystr;
    int sqs = 0;
    int **key;

    if (check_err(argc, argv))
        return 84;
    if (argc == 2)
        return display_help();
    keyl = len(argv[2]);
    msg = argv[1];
    keystr = argv[2];
    ps("Key matrix:\n");
    for (; keyl > sqs * sqs; sqs++);
    key = make_key (sqs, keystr);
    ps("\nEncrypted message:\n");
    if (argv[3][0] == 48)
        encrypt (msg, key, sqs);
    return 0;
}
