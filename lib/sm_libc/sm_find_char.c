/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_find_char_str
*/

int sm_find_char(char const *str, char c)
{
    for (int i = 0; str[i]; ++i) {
        if (str[i] == c)
            return i;
    }
    return (-1);
}