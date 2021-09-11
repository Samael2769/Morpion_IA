/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_freeall
*/

#include <stdlib.h>
#include <stdarg.h>

static void free_double(void **ptr)
{
    for (int i = 0; ptr[i]; i++)
        free(ptr[i]);
    free(ptr);
}

static void free_triple(void ***ptr)
{
    for (int i = 0; ptr[i]; i++)
        free_double(ptr[i]);
    free(ptr);
}

void sm_freeall(char *list, ...)
{
    va_list ap;
    void *a;
    void **b;
    void ***c;

    va_start(ap, list);
    for (int p = 0; list[p]; p++) {
        if (list[p] == '1') {
            a = va_arg(ap, void *);
            free(a);
        }
        if (list[p] == '2') {
            b = va_arg(ap, void **);
            free_double(b);
        } else if (list[p] == '3') {
            c = va_arg(ap, void ***);
            free_triple(c);
        }
    }
    va_end(ap);
}