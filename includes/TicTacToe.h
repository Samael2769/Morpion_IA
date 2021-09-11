/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my
*/

#ifndef TICTACTOE_H
#define TICTACTOE_H

int tictactoe(int type);
char **create_map(void);
int player(char **map, char c);
int end_condition(char **map);
void display_map(char **map);
void sm_ia(char **map);
void write_on_map(int cols, int rows, char **map, char c);
#endif /* !TICTACTOE_H */