#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

void execute_command(char *str, char **env, char **argv);
void callDir(void);
int checkInput(char *str);
int checkForPipes(char *str, char **argv, char **piped, char **env);
int pipe_checker(char *str, char **piped);
void pass_command(char *str, char **args);
int cmd_default(char **args, char **env);
void execute_func(char **argcmd, char **argv, char **env);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _strncmp(char *s1, char *s2, size_t n);
char *get_path(char *cmd);
int _strlen(char *str);
char *get_env(char *name);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
void print_env(char **env);
char *_realloc(char * ptr, size_t n);
char *_getline(void)
#endif /*SHELL_H*/
