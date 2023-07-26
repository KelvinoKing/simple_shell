#include "shell.h"

/**
 * checkForPipes - checks the user input for pipes
 * @str: command
 * @arg: array to hold commands
 * @argPip: array to hold piped commands
 * @env: enviroment variable
 *
 * Return: int
 */
int checkForPipes(char *str, char **arg, char **argPip, char **env)
{
	char *piped[2];
	int i = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	i = pipe_checker(str, piped);
	if (i)
	{
		pass_command(piped[0], arg);
		pass_command(piped[1], argPip);
	}
	else
	{
		pass_command(str, arg);
	}

	if (cmd_default(arg, env))
		return (0);
	else
		return (1 + i);
}
