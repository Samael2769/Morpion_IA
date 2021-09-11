/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_calloc
*/

#include <stdlib.h>

void *sm_memset(void * ptr, int c, size_t size)
{
    unsigned char *tmp = ptr;
    
    for (size_t i = 0; i < size; ++i, tmp++)
        *tmp = (unsigned char)c;
    return ptr;
}

void *sm_calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(sizeof(size) * nmemb);

    ptr = sm_memset(ptr, 0, nmemb);
    return ptr;
}