#include "shell.h"

/**
 * checkForPipes - checks the user input for pipes
 * @str: command
 * @args: array to hold commands
 * @argsPiped: array to hold piped commands
 * @env: enviroment variable
 *
 * Return: int
 */
int checkForPipes(char *str, char **args, char **argsPiped, char **env)
{
	char *piped[2];
	int i = 0;

	i = pipe_checker(str, piped);
	if (i)
	{
		pass_command(piped[0], args);
		pass_command(piped[1], argsPiped);
	}
	else
	{
		pass_command(str, args);
	}

	if (cmd_default(args, env))
		return (0);
	else
		return (1 + i);
}
