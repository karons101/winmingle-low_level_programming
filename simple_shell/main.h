#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

extern char **environ;

/**

struct alias_s - Structure for shell aliases

@name: Name of the alias

@value: Value of the alias
*/
typedef struct alias_s
{
char *name;
char *value;
} alias_t;

/* Function Prototypes */
char *_strtok(char *str, const char *delim);
char *_strchr(const char *s, int c);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char *get_path(char *command);
int handle_cmd(char *line);
int handle_cd(char **args);
int handle_alias(char **args);

#endif /* MAIN_H */
