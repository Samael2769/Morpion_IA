/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tests_sm_strlen
*/


#include <criterion/criterion.h>

size_t sm_strlen(char const *str);

Test(sm_strlen, normal1)
{
    char *str = "ALPHA";
    size_t size = sm_strlen(str);

    cr_assert_eq(size, strlen(str));
}

Test(sm_strlen, big1)
{
    char *str = "ALPHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    size_t size = sm_strlen(str);

    cr_assert_eq(size, strlen(str));
}

Test(sm_strlen, error1)
{
    char *str = NULL;
    size_t size = sm_strlen(str);

    cr_assert_eq(size, 0);
}

Test(sm_strlen, error2)
{
    char *str = "\0";
    size_t size = sm_strlen(str);

    cr_assert_eq(size, 0);
}