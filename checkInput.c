#include "shell.h"

/**
 * checkInput - Accepts user input
 * @inputCmd: user command
 *
 * Return: int
 */
int checkInput(char *inputCmd)
{
	char *buffer = NULL;
	size_t n = 0;
	ssize_t j;

	j = getline(&buffer, &n, stdin);
	if (j == -1)
	{
		return (1);
	}
	if (buffer != NULL)
	{
		buffer = strtok(buffer, "\n");
		_strcpy(inputCmd, buffer);
	}
	else
	{
		return (1);
	}
	return (0);
}
