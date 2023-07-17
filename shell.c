#include "shell.h"

/**
 * main - Entry point for program
 * @argc: number of arguments
 * @argv: argument vector
 * @env: enviroments
 *
 * Return: int
 */
int main(__attribute__((unused)) int argc, char **argv, __attribute__((unused)) char **env)
{
	char cmdString[1024];
	char *args[50];
	int i;

	while (1)
	{
		callDir();

	if (checkInput(cmdString))
		continue;

	i = checkForPipes(cmdString, args);
	if (i == 1)
		{
			execute_func(args, argv);
		}
	}

	free(cmdString);
	free(args);
	return (0);
}
