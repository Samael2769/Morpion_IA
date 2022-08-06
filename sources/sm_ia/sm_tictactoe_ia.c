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

static vector_t ia_level_one(char **map)
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
    return (vector_t){x, y};
}

static vector_t count_nb(char **map, vector_t a, vector_t b, vector_t c, char x)
{
    int nb = 0;
    int an = 0;
    int bn = 0;
    int cn = 0;

    if (map[a.x][a.y] == x) {
        nb++;
        an = 1;
    }
    if (map[b.x][b.y] == x) {
        nb++;
        bn = 1;
    }
    if (map[c.x][c.y] == x) {
        nb++;
        cn = 1;
    }
    if (nb == 2) {
        if (an == 0)
            return (a);
        if (bn == 0)
            return (b);
        if (cn == 0)
            return (c);
    }
    return (vector_t){-1, -1};
}

static vector_t defend(char **map)
{
    vector_t vec;

    vec = count_nb(map, (vector_t){0, 0}, (vector_t){0, 1}, (vector_t){0, 2}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 0}, (vector_t){1, 0}, (vector_t){2, 0}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 0}, (vector_t){1, 1}, (vector_t){2, 2}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 2}, (vector_t){1, 1}, (vector_t){2, 0}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 1}, (vector_t){1, 1}, (vector_t){2, 1}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){1, 0}, (vector_t){1, 1}, (vector_t){1, 2}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){2, 0}, (vector_t){2, 1}, (vector_t){2, 2}, 'X' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 2}, (vector_t){1, 2}, (vector_t){2, 2}, 'X' );
    if (vec.x != -1)
        return (vec);
    return (vector_t){-1, -1};
}

static vector_t attack(char **map)
{
    vector_t vec;

    vec = count_nb(map, (vector_t){0, 0}, (vector_t){0, 1}, (vector_t){0, 2}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 0}, (vector_t){1, 0}, (vector_t){2, 0}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 0}, (vector_t){1, 1}, (vector_t){2, 2}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 2}, (vector_t){1, 1}, (vector_t){2, 0}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 1}, (vector_t){1, 1}, (vector_t){2, 1}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){1, 0}, (vector_t){1, 1}, (vector_t){1, 2}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){2, 0}, (vector_t){2, 1}, (vector_t){2, 2}, 'O' );
    if (vec.x != -1)
        return (vec);
    vec = count_nb(map, (vector_t){0, 2}, (vector_t){1, 2}, (vector_t){2, 2}, 'O' );
    if (vec.x != -1)
        return (vec);
    return (vector_t){-1, -1};
}

//attack only
static vector_t ia_level_two(char **map)
{
    vector_t vec;

    vec = attack(map);
    if (vec.x == -1) {
        vec = ia_level_one(map);
    }
    return (vec);
}

//defend only
static vector_t ia_level_three(char **map)
{
    vector_t vec;

    vec = defend(map);
    if (vec.x == -1) {
        vec = ia_level_one(map);
    }
    return (vec);
}

//defend & attack
static vector_t ia_level_four(char **map)
{
    vector_t vec;

    vec = defend(map);
    if (vec.x == -1) {
        vec = attack(map);
    }
    if (vec.x == -1) {
        vec = ia_level_one(map);
    }
    return (vec);
}

void sm_ia(char **map)
{
    vector_t vec;
    vec = ia_level_two(map);
    write_on_map(vec.x + 1, vec.y + 1, map, 'O');
}