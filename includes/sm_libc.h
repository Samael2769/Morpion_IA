/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my
*/

#ifndef SM_LIBC_H_
#define SM_LIBC_H_
#include <stddef.h>

void *sm_realloc(void *ptr, size_t size, size_t ptr_size);
int sm_find_char(char const *str, char c);
size_t sm_strlen(char const *str);
char *sm_strcat(char *dest, char const *src);
char *sm_strconcat(char *dest, char const *src);
char *sm_itoa(int nb);
int sm_nbrlen(int nb);
void *sm_calloc(size_t nmemb, size_t size);
void *sm_memset(void * ptr, int c, size_t size);
void sm_revstr(char *str);
char *sm_convert_base(int base, int nbr, int type);
char *sm_strdup(char const *str);
char *sm_strcpy(char *dest, char const *src);
int sm_strcmp(char const *str1, char const *str2);
int sm_putstr(char const *str);
void sm_freetab(char **tab);
int sm_atoi(char *str);
char *sm_strstr(char *haystack, char *needle);
int sm_count_char(char *str, char c);
char **sm_strtoarr(char *str, char pars);
int sm_tablen(char **tab);
int sm_parselen(char ***parser);
void sm_freeall(char *list, ...);
char ***sm_parser(char *filepath);
void sm_puttab(char **tab);
int sm_put_nbr(int nb);
void sm_putchar(char c);
int sm_printf(char *s, ...);

#endif /* !SM_LIBC_H_ */
