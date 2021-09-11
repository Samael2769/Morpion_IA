/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tictactoe
*/

#include "TicTacToe.h"
#include "sm_libc.h"

static void game(int type, char **map)
{
    while (1) {
        display_map(map);
        if (player(map, 'X') == -1)
            break;
        display_map(map);
        if (end_condition(map) != 0)
            break;
        if (type == 1) {
            if (player(map, 'O') == -1)
                break;
        }else
            sm_ia(map);
        if (end_condition(map) != 0) {
            display_map(map);
            break;
        }
    }
}

int tictactoe(int type)
{
    char **map = create_map();

    game(type, map);
    sm_freetab(map);
    return 0;
}