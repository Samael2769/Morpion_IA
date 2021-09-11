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

    if (ac != 2)
        return 84;
    if (ac == 2 && sm_strcmp(av[1], "-h") == 0) {
        sm_putstr(usages);
        return 0;
    }
    type = sm_atoi(av[1]);
    if (type != 1 && type != 2)
        return 84;
    if (tictactoe(type) != 0)
        return 84;
    return 0;
}