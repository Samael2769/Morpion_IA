/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** the_parser
*/

#include "sm_libc.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int read_buffer(char *filepath, char **str, size_t size)
{
    char *buff = *str;
    int fd = open(filepath, O_RDONLY);
    if (fd == (-1))
        return (-1);
    if (read(fd, buff, size) == (-1))
        return (-1);
    buff[size] = '\0';
    str = &buff;
    return 0;
}

char ***sm_parser(char *filepath)
{
    char *buffer = NULL;
    char ***parsed;
    char **tamp;
    struct stat buff;
    int i = 0;

    stat(filepath, &buff);
    buffer = malloc(sizeof(char) * (buff.st_size + 1));
    if (read_buffer(filepath, &buffer, buff.st_size) == (-1))
        return NULL;
    tamp = sm_strtoarr(buffer, '\n');
    parsed = malloc(sizeof(char **) * (sm_tablen(tamp) + 1));
    for (; tamp[i] != NULL; ++i)
        parsed[i] = sm_strtoarr(tamp[i], ':');
    parsed[i] = NULL;
    free(buffer);
    return parsed;
}