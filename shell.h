#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

void callDir(void);
int checkInput(char *str);
int checkForPipes(char *str, char **argv);
void execute_func(char **argcmd, char **argv);
int _strcmp(char *s1, char *s2);

#endif /*SHELL_H*/
