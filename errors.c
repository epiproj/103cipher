/*
** EPITECH PROJECT, 2020
** errors.c
** File description:
** asdfqwer12345678
*/

#include <stdlib.h>
#include "include/my.h"

void encrypt(char *msg, int **key, int sqs);
int display_help(void);

int check_err (int argc, char *argv[])
{
    if (argc != 4 && argc != 2)
        return 1;
    if (argc == 4) {
        if (len (argv[3]) > 1)
            return 1;
        if (argv[3][0] != 48 && argv[3][0] != 49)
            return 1;
    }
    return 0;
}
