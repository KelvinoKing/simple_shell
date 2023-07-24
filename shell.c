#include "shell.h"

/**
 * main - Entry point for program
 * @argc: number of arguments
 * @argv: argument vector
 * @env: enviroments
 *
 * Return: int
 */
int main(__attribute__((unused)) int argc, char **argv,  char **env)
{
	char cmdString[1024];
	char *args[100], *argsPiped[100];
	int i;

	while (1)
	{
		callDir();
		if (checkInput(cmdString))
		continue;

		i = checkForPipes(cmdString, args, argsPiped, env);
		if (i == 1)
		{
			execute_func(args, argv, env);
		}
		if (i == 2)
			continue;
	}
	return (0);
}
