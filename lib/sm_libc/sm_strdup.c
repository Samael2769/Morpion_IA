/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_strdup
*/

#include "sm_libc.h"
#include <stdlib.h>

char *sm_strdup(char const *str)
{
    size_t size = sm_strlen(str);
    char *res = malloc(sizeof(char) * (size + 1));

    res = sm_strcpy(res, str);
    return res;
}