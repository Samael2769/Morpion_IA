/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** create_map
*/

#include <stdlib.h>
#include "sm_libc.h"

static char **alloc_map_size(int size)
{
    char **map = malloc(sizeof(char *) * (size + 1));

    for (int i = 0; i < size; ++i) {
        map[i] = malloc(sizeof(char) * (size + 1));
        map[i][size] = '\0'; 
    }
    map[size] = NULL;
    return map;
}

char **create_map(void)
{
    char **map = alloc_map_size(3);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            map[i][j] = ' ';
        }
    }
    return map;
}

void write_on_map(int cols, int rows, char **map, char c)
{
    int x = 0;
    int y = 0;

    x = cols - 1;
    y = rows - 1;
    map[x][y] = c;
}