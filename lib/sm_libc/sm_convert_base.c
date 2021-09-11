/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_convert_base
*/

#include "sm_libc.h"
#include <stdlib.h>

static char set_value(int nb, int type)
{
    if (nb >= 0 && nb <= 9)
        return (nb + '0');
    else {
        if (type == 0)
            return (nb - 10 + 'A');
        else
            return (nb - 10 + 'a');
    }
}

char *sm_convert_base(int base, int nbr, int type)
{
    int i = 0;
    char *result = malloc(sizeof(char) * sm_nbrlen(nbr) + 2);

    while (nbr > 0) {
        result[i++] = set_value(nbr % base, type);
        nbr /= base;
    }
    result[i] = '\0';
    sm_revstr(result);
    return result;
}