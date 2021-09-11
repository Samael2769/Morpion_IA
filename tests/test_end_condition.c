/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_end_condition
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "TicTacToe.h"
#include "sm_libc.h"
#include "stdlib.h"

void redirect_all_std(void);

Test(winner_1, test3, .init=redirect_all_std)
{
    char **map = create_map();
    int end = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            map[i][j] = 'X';
    end = end_condition(map);
    cr_assert_eq(end, 1);
    cr_assert_stdout_eq_str("The winner is player 1\n");
}

Test(winner_2, test3, .init=redirect_all_std)
{
    char **map = create_map();
    int end = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            map[i][j] = 'O';
    end = end_condition(map);
    cr_assert_eq(end, 1);
    cr_assert_stdout_eq_str("The winner is player 2\n");
}

Test(tie, test3, .init=redirect_all_std)
{
    char **map = create_map();
    int end = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            map[i][j] = 'I';
    end = end_condition(map);
    cr_assert_eq(end, 1);
    cr_assert_stdout_eq_str("This is a Tie\n");
}

Test(not_end, test3, .init=redirect_all_std)
{
    char **map = create_map();
    int end = 0;

    end = end_condition(map);
    cr_assert_eq(end, 0);
}