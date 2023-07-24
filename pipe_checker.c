#include "shell.h"
/**
 * pipe_checker - Checks for pipes
 * @str: first argument
 * @piped: second argument
 *
 * Return: int
 */
int pipe_checker(char *str, char **piped)
{
	int j = 0;
	piped[0] = NULL;
	piped[1] = NULL;

	piped[j] = strtok(str, "|");
	while (j < 2)
	{
		if (piped[j] == NULL)
			break;
		piped[j] = strtok(NULL, "|");
		j++;
	}

	if (piped[1] == NULL)
		return (0);
	else
		return (1);
}
