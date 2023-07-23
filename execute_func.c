#include "shell.h"

/**
 * execute_func - executes functions
 * @argcmd: pointer to pointer array containing commands
 * @argv: array of arguments
 * @env: enviroment
 *
 * Return: void
 */

void execute_func(char **argcmd, char **argv, char **env)
{
	pid_t child_pid;
	char *cmd = argcmd[0], *old_cmd = get_path(cmd);

	if (old_cmd)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror(argv[0]);
			return;
		}

		if (child_pid == 0)
		{
			if (execve(old_cmd, argcmd, env) == -1)
			{
				perror(argv[0]);
				exit(0);
			}
		}
		else
		{
			wait(NULL);
		}
	}
	else
	{
		perror(argv[0]);
	}

}
