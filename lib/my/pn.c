/*
** EPITECH PROJECT, 2020
** pn
** File description:
** putmm
*/

#include "my.h"

void pn_rec(int nb, int power)
{
    pc(nb / power + 48);
    if (power > 1)
        pn_rec(nb % power, power / 10);
}

void pn(int nb)
{
    int power = 0;

    if (!nb) {
        pc(48);
        return;
    } else {
        power = 1;
    }
    for (int nb2 = nb; nb2 > 9 || nb2 < -9; nb2 /= 10)
        power *= 10;
    if (nb < 0) {
        pc(45);
        pc(-(nb / power) + 48);
        if (power > 1)
            pn_rec(-(nb % power), power / 10);
    } else {
        pn_rec(nb, power);
    }
}
