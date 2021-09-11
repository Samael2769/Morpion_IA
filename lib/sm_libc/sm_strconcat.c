/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** =sm_strconcat
*/

#include <stdlib.h>
#include "sm_libc.h"

char *sm_strconcat(char *dest, char const *src)
{
    char *copy = malloc(sizeof(char) * (sm_strlen(dest) + sm_strlen(src) + 1));
    int i = 0;

    for (i = 0; dest[i]; ++i)
        copy[i] = dest[i];
    for (int j = 0; src[j]; ++j, ++i)
        copy[i] = src[j];
    copy[i] = '\0';
    return copy;
}