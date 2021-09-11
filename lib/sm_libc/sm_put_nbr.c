/*
** EPITECH PROJECT, 2020
** Task07_Pool_Day03
** File description:
** Display Number
*/

#include <unistd.h>

int sm_put_nbr(int nb)
{
    char a = 0;

    if (nb <0) {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb <= 9) {
        a = nb + 48;
        write(1, &a , 1);
    }else {
        sm_put_nbr(nb / 10);
        sm_put_nbr(nb % 10);
    }
    return 0;
}

