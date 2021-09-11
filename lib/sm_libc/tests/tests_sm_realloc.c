/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tests_sm_realloc
*/

#include <criterion/criterion.h>

void *sm_realloc(void *ptr, size_t size, size_t ptr_size);

Test(sm_realloc, string1)
{
    char *str = malloc(sizeof(char) * 2);
    
    str[0] = 'a';
    str[1] = '\0';
    str = sm_realloc(str, sizeof(char) * 3, sizeof(char) * 2);
    str[1] = 'b';
    str[2] = '\0';

    cr_assert_str_eq(str, "ab");
    free(str);
}

Test(sm_realloc, int1)
{
    int *nbr = malloc(sizeof(int) * 2);
    
    nbr[0] = 1;
    nbr[1] = 2;
    nbr = sm_realloc(nbr, sizeof(int) * 3, sizeof(int) * 2);
    nbr[2] = 3;

    for (int i = 0; i < 3; ++i) {
        cr_assert_eq(nbr[i], i + 1);
    }
    free(nbr);
}