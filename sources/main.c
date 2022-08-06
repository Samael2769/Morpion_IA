/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/
#include "TicTacToe.h"
#include "sm_libc.h"

static const char *usages = {
    "TicTacToe:\n"
    "\t1 for PvP, 2 for PvIa.\n"
    "\tEach turns, place a mark by typing coords.\n"
};

int main(int ac, char * av[])
{
    int type = 0;
    int level = 0;

    if (ac == 2 && sm_strcmp(av[1], "-h") == 0) {
        sm_putstr(usages);
        return 0;
    }
    if (ac > 3)
        return 84;
    type = sm_atoi(av[1]);
    if (type != 1 && type != 2)
        return 84;
    if (type == 2) {
        if (ac != 3)
            return 84;
        level = sm_atoi(av[2]);
        if (level < 1 || level > 4)
            return 84;
    }
    if (tictactoe(type, level) != 0)
        return 84;
    return 0;
}