#include "shell.h"
/**
 * pass_command - receives command
 * @str: command by user
 * @args: parameter
 *
 * Return: void
 */
void pass_command(char *str, char **args)
{
	int j = 0;

	args[j] = strtok(str, " ");
	while (args[j] != NULL)
	{
		j++;
		args[j] = strtok(NULL, " ");
	}
}
