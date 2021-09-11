/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_tablen
*/

int sm_tablen(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i]; ++i)
        ++count;
    return count;
}

int sm_parselen(char ***parser)
{
    int count = 0;

    for (int i = 0; parser[i]; ++i)
        ++count;
    return count;
}