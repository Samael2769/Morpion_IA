/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_strcat
*/

char *sm_strcat(char *dest, char const *src)
{
    int i = 0;

    for (i = 0; dest[i] != '\0'; ++i);
    for (int j = 0; src[j] != '\0'; ++j, ++i)
        dest[i] = src[j];
    dest[i] = '\0';
    return dest;
}