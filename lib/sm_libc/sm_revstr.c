/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_revstr
*/

#include "sm_libc.h"

void sm_revstr(char *str)
{
    size_t len = sm_strlen(str);
    char temp;

    for (int i = 0; i < len/2; ++i) {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}