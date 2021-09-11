/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_realloc
*/

#include <stdlib.h>

void *sm_realloc(void *ptr, size_t size, size_t ptr_size)
{
    void *copy = malloc(size);

    for (int i = 0; i < ptr_size; ++i)
        *((unsigned char *)copy + i) = *((unsigned char *)ptr + i);
    free(ptr);
    return copy;
}