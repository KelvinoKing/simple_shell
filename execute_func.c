#include "shell.h"

/**
 * execute_func - executes functions
 * @argcmd: pointer to pointer array containing commands
 * @argv: array of arguments
 *
 * Return: 0
 */

void execute_func(char **argcmd, char **argv)
{
	pid_t child_pid;
	char *cmd = NULL, *old_cmd = NULL;

	cmd = argcmd[0];
	old_cmd = get_path(cmd);
	if (old_cmd)
	{
	child_pid = fork();
	if (child_pid == -1)
	{
		perror(argv[0]);
		return (0);
	}

	if (child_pid == 0)
	{
		char *environ[] = {NULL};

		if (execve(old_cmd, argcmd) == -1)
		{
			perror(argv[0]);
			exit(0);
		}

			free(old_cmd);
		}

	}
	else
	{
		wait(NULL);
		return (0);
	}
		return (0);
}
