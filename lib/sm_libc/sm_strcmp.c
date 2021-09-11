/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_strcmp
*/

#include <stddef.h>
#include "sm_libc.h"

int sm_strcmp(char const *str1, char const *str2)
{
    size_t size1 = sm_strlen(str1);
    size_t size2 = sm_strlen(str2);

    if (size1 != size2)
        return (size1 - size2);
    for (int i = 0; str1[i]; ++i) {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    }
    return 0;
}