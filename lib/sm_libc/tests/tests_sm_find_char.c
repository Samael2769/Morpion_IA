/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tests_sm_find_char
*/

#include <criterion/criterion.h>

int sm_find_char(char const *str, char c);

Test(sm_find_char, normal1)
{
    char *str = "alpha";
    char c = 'a';
    int result = sm_find_char(str, c);
    
    cr_assert_eq(result, 0);
}

Test(sm_find_char, wrong1)
{
    char *str = "alpha";
    char c = 'b';
    int result = sm_find_char(str, c);
    
    cr_assert_eq(result, -1);
}