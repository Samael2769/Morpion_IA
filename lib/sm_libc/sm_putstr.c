/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_putstr
*/

#include "sm_libc.h"
#include <unistd.h>

void sm_putchar(char c)
{
    write(1, &c, 1);
}

int sm_putstr(char const *str)
{
    if (!str)
        return (-1);
    write(1, str, sm_strlen(str));
    return 0;
}