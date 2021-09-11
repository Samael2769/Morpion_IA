/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_freetab
*/

#include <stdlib.h>

void sm_freetab(char **tab)
{
    for (int i = 0; tab[i]; ++i)
        free(tab[i]);
    free(tab);
}