#include "shell.h"
/**
 * print_env - prints all enviroment variables
 * @env: parameter
 *
 * Return: void
 */
void print_env(char **env)
{
	int i;
	char **ptr = env;

	while (*ptr != NULL)
	{
		i = 0;
		while ((*ptr)[i] != '\0')
		{
			i++;
		}
		write(STDOUT_FILENO, *ptr, i);
		write(STDOUT_FILENO, "\n", 1);
		ptr++;
	}
}
