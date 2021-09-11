/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_strlen
*/

#include <stddef.h>

size_t sm_strlen(char const *str)
{
    int count;
    if (!str || str[0] == '\0')
        return 0;
    for (count = 0; str[count] != '\0'; ++count);
    return count;
}