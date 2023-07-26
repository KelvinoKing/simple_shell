#include "shell.h"
/**
 * print_env - prints all enviroment variables
 * @env: parameter
 *
 * Return: void
 */
void print_env(char **env)
{
	int j = 0;

	if (env == NULL || *env == NULL)
		return;
	for (j = 0; env[j] != NULL; j++)
	{
		write(STDOUT_FILENO, env[j], _strlen(env[j]));
		write(STDOUT_FILENO, "\n", 1);
	}
}
