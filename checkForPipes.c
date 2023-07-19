#include "shell.h"

/**
 * checkForPipes - checks the user input for pipes
 * @str: command
 * @argv: array to hold commands
 *
 * Return: int
 */
int checkForPipes(char *str, char **argv)
{
	int i = 0;

	argv[i] = strtok(str, " ");
	while (argv[i] != NULL)
	{
		i++;
		argv[i] = strtok(NULL, " ");
	}
	return (1);
}
