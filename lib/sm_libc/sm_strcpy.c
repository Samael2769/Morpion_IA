/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_strcpy
*/

char *sm_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i]; ++i)
        dest[i] = src[i];
    return dest;
}