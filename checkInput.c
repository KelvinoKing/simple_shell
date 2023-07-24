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

	buffer = malloc(sizeof(char) * n);
	if (buffer == NULL)
		return (1);
	j = getline(&buffer, &n, stdin);
	if (j == -1)
	{
		free(buffer);
		return (1);
	}
	buffer = strtok(buffer, "\n");
	if (buffer[0] != '\0')
	{
		_strcpy(inputCmd, buffer);
		free(buffer);
		return (0);
	}
	else
	{
		free(buffer);
		return (1);
	}
}
