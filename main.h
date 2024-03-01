#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

char **tokenize_input(char *lineptr);
void prompt_user(char **lineptr, size_t *n);
void execute_input(char **args);

#endif
