/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_strstr
*/

#include "sm_libc.h"

char *sm_strstr(char *haystack, char *needle)
{
    if (needle[0] == 0)
        return haystack;
    for (int i = 0; haystack[i] != '\0'; ++i) {
        if (haystack[i] != needle[0])
            continue;
        for (int j = 0; needle[j] != '\0' && haystack[j] != '\0'; ++j, ++i) {
            if (haystack[j] != needle[i])
                break;
            if (needle[j + 1] == '\0')
                return (haystack + (i - j));
        }
    }
    return NULL;
}