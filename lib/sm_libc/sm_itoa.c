/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_itoa
*/

#include <stdlib.h>
#include "sm_libc.h"

int sm_nbrlen(int nb)
{
    int len = 0;

    if (nb < 0) {
        nb = -nb;
        len++;
    }
    while (nb > 0) {
        nb = nb / 10;
        len++;
    }
    return len;
}

char *sm_itoa(int nb)
{
    int len = sm_nbrlen(nb);
    int res = nb;
    char *nbr_str = sm_calloc(len + 1, sizeof(char));
    int tmp = 0;

    while (len >= 0) {
        tmp = (nb % 10) + '0';
        if (len > 0)
            nbr_str[len - 1] = tmp;
        nb = (nb / 10);
        len = len - 1;
    }
    if (res < 0)
        nbr_str = sm_strconcat("-", nbr_str);
    return (nbr_str);
}