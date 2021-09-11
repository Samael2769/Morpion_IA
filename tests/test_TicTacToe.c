/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "TicTacToe.h"
#include "sm_libc.h"
#include "stdlib.h"

void redirect_all_std(void)
{
    cr_redirect_stderr();
    cr_redirect_stdout();
}

Test(test_creation_map, test1, .init=redirect_all_std)
{
    char **map = create_map();

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cr_assert_eq(' ', map[i][j]);
    sm_freetab(map);
}

Test(test_writing_on_map, test2, .init=redirect_all_std)
{
    char **map = create_map();
    int x = 0;
    int y = 0;

    x = rand() % 3;
    y = rand() % 3;

    write_on_map(x + 1, y + 1, map, 'X');
    cr_assert_eq(map[x][y], 'X');
}
