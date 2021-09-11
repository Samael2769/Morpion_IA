/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_tictactoe_ia
*/

#include "sm_libc.h"
#include "TicTacToe.h"
#include "stdlib.h"
#include "time.h"

static void ia_level_one(char **map)
{
    int x = 0;
    int y = 0;
    srand(time(NULL));

    while (1)
    {
        x = rand() % 3;
        y = rand() % 3;
        if (map[x][y] == ' ')
            break;
    }
    write_on_map(x + 1, y + 1, map, 'O');
}

void sm_ia(char **map)
{
    ia_level_one(map);
}