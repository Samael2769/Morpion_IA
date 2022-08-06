/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my
*/

#ifndef TICTACTOE_H
#define TICTACTOE_H

typedef struct vector_s {
    int x;
    int y;
} vector_t;

int tictactoe(int type, int level);
char **create_map(void);
int player(char **map, char c);
int end_condition(char **map);
void display_map(char **map);
void sm_ia(char **map, int level);
void write_on_map(int cols, int rows, char **map, char c);
#endif /* !TICTACTOE_H */