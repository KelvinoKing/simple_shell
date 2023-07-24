#include "shell.h"
/**
 * cmd_default - Checks for user own commands
 * @args: commands
 * @env: enviroment variable
 *
 * Return: int
 */
int cmd_default(char **args, char **env)
{
	char *list_cmd[] = {"exit", "env"};
	int i = 0, count = 0;

	while (i < 2)
	{
		if (_strcmp(args[0], list_cmd[i]) == 0)
		{
			count = i + 1;
			break;
		}
		i++;
	}
	switch (count)
	{
		case 1:
			exit(0);
			break;
		case 2:
			print_env(env);
			return (1);
		default:
			break;
	}
	return (0);
}
