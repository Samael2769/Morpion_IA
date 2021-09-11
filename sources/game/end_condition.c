/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** end_condition
*/

/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** end_condition
*/

#include "sm_libc.h"

static char win_lose(char **map)
{
    char win = 0;

    if (map[0][0] != ' ' && map[0][1] == map[0][0] && map[0][2] == map[0][0])
        win = map[0][0];
    if (map[0][0] != ' ' && map[1][0] == map[0][0] && map[2][0] == map[0][0])
        win = map[0][0];
    if (map[0][0] != ' ' && map[1][1] == map[0][0] && map[2][2] == map[0][0])
        win = map[0][0];
    if (map[0][1] != ' ' && map[1][1] == map[0][1] && map[2][1] == map[0][1])
        win = map[0][1];
    if (map[1][0] != ' ' && map[1][1] == map[1][0] && map[1][2] == map[1][0])
        win = map[1][0];
    if (map[0][2] != ' ' && map[1][2] == map[0][2] && map[2][2] == map[0][2])
        win = map[0][2];
    if (map[2][0] != ' ' && map[2][1] == map[2][0] && map[2][2] == map[2][0])
        win = map[2][0];
    if (map[0][2] != ' ' && map[1][1] == map[0][2] && map[2][0] == map[0][2])
        win = map[0][2];
    return win;
}

static int tie(char **map)
{
    for (int i = 0; map[i]; ++i)
        for (int j = 0; map[j]; ++j)
            if (map[i][j] == ' ')
                return 1;
    return 0;
}

int end_condition(char **map)
{
    char winner = 0;

    winner = win_lose(map);
    if (winner == 'X') {
        sm_putstr("The winner is player 1\n");
        return 1;
    }
    if (winner == 'O') {
        sm_putstr("The winner is player 2\n");
        return 1;
    }
    if (tie(map) == 0) {
        sm_putstr("This is a Tie\n");
        return 1;
    }
    return 0;
}