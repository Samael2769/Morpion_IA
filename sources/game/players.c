/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** players
*/

#include <stdio.h>
#include "sm_libc.h"
#include "TicTacToe.h"

static int collide(int rows, int cols, char **map)
{
    if (map[cols - 1][rows - 1] != ' ')
        return -1;
    return 0;
}

static int get_nbr_from_line(void)
{
    char *line = NULL;
    size_t nb = 0;

    while (1) {
        if (getline(&line, &nb, stdin) == -1)
            return (-1);
        if (sm_atoi(line) == 1 || sm_atoi(line) == 2 || sm_atoi(line) == 3)
            break;
        sm_putstr("Please enter a correct value\n");
    }
    return sm_atoi(line);
}

int player(char **map, char c)
{
    int rows = 0;
    int cols = 0;

    while(1) {
        sm_putstr("Enter a cols value: \n");
        cols = get_nbr_from_line();
        if (cols == -1)
            return -1;
        sm_putstr("Enter a rows value: \n");
        rows = get_nbr_from_line();
        if (rows == -1)
            return -1;
        if (collide(rows, cols, map) == 0)
            break;
        sm_putstr("There is a symbole here.\n");
    }
    write_on_map(cols, rows, map, c);
    return 0;
}