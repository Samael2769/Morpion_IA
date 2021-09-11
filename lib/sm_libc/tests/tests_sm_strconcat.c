/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tests_sm_strconcat
*/

#include <criterion/criterion.h>

char *sm_strconcat(char *dest, char const *src);

Test(sm_strconcat, normal1)
{
    char *dest = "Test";
    char *src = "alpha";

    dest = sm_strconcat(dest, src);
    cr_assert_str_eq(dest, "Testalpha");
}

Test(sm_strconcat, big1)
{
    char *dest = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char *src = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";

    dest = sm_strconcat(dest, src);
    cr_assert_str_eq(dest, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb");
}