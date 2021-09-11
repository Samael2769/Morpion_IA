/*
** EPITECH PROJECT, 2020
** ..
** File description:
** ..
*/

#include <stdarg.h>
#include "sm_libc.h"

static void wrapper_putchar(va_list ap)
{
    sm_putchar(va_arg(ap, int));
}

static void wrapper_putnbr(va_list ap)
{
    sm_put_nbr(va_arg(ap, int));
}

static void wrapper_string(va_list ap)
{
    sm_putstr(va_arg(ap, char *));
}

int sm_printf(char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    char *flag = "dcs";
    void (*ptr[3])(va_list) = {&wrapper_putnbr, &wrapper_putchar,
    &wrapper_string};

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i++;
            for (int j = 0; flag[j] != '\0'; j++) {
                if (s[i] == flag[j])
                    (*ptr[j])(ap);
            }
        }else
            sm_putchar(s[i]);
    }
    va_end(ap);
    return 0;
}
