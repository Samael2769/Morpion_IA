/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** display_game
*/

#include "sm_libc.h"

void display_map(char **map)
{
    sm_printf("\
    -------\n\
    |%c|%c|%c|\n\
    |-|-|-|\n\
    |%c|%c|%c|\n\
    |-|-|-|\n\
    |%c|%c|%c|\n\
    -------\n",
    map[0][0], map[0][1], map[0][2],
    map[1][0], map[1][1], map[1][2],
    map[2][0], map[2][1], map[2][2]);
}

/*
-------
|X|O|X|
|-|-|-|
|X|O|X|
|-|-|-|
|X|O|X|
-------
*/