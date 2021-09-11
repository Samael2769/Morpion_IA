/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tests_sm_strcat
*/

#include <criterion/criterion.h>

char *sm_strcat(char *dest, char const *src);

Test(sm_strcat, normal1)
{
    char *dest = malloc(sizeof(char) * 2);
    char *src = "test";

    dest[0] = 'a';
    dest[1] = '\0';
    dest = realloc(dest, sizeof(char) * 3);
    dest = sm_strcat(dest, src);
    cr_assert_str_eq(dest, "atest");
}