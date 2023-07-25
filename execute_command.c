#include "shell.h"

/**
 * execute_command - Execute commands in non-interactive mode
 * @cmd: command passed
 * @env: environment variable
 * @argv: programe arguments
 *
 * Return: void
 */
void execute_command(char *cmd, char **env, char **argv)
{
	pid_t pid = fork();
	char *args[100], *token;
	int arg_count = 0;

	if (pid < 0)
	{
		perror(argv[0]);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		token = strtok(cmd, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		if (execve(args[0], args, env) == -1)
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;

		wait(&status);
	}
}
