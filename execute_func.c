#include "shell.h"

/**
 * execute_func - executes functions
 * @argcmd: pointer to pointer array containing commands
 * @argv: array of arguments
 * @environ: all enviroment array
 *
 * Return: void
 */
void execute_func(char **argcmd, char **argv)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror(argv[0]);
		return (0);
	}

	if (child_pid == 0)
	{
		if (execve(argcmd[0], argcmd, NULL) == -1)
		{
			perror(argv[0]);
			exit(0);
		}	
	}
	else
	{
		wait(NULL);
	}

	return (0);
}
