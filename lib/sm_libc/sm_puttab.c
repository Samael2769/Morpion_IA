/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_puttab
*/

#include "sm_libc.h"
#include <unistd.h>

void sm_puttab(char **tab)
{
    for (int i = 0; tab[i]; ++i) {
        sm_putstr(tab[i]);
        write(1, "\n", 1);
    }
}