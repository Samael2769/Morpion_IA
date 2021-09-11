/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_count_char
*/

int sm_count_char(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == c)
            count++;
    }
    return count;
}