#include "shell.h"

/**
 * checkInput - Accepts user input
 * @inputCmd: user command
 * @bufSize: size of inputCmd
 *
 * Return: int
 */
int checkInput(char *inputCmd, int bufSize)
{
	char *buffer = NULL;
	size_t n = 0;
	ssize_t j;

	j = _getline(&buffer, &n, stdin);
	if (j == -1)
	{
		free(buffer);
		return (1);
	}
	if (buffer[j - 1] == '\n')
		buffer[j - 1] = '\0';
	if (buffer[0] != '\0')
	{
		if (_strlen(buffer) >= bufSize)
		{
			free(buffer);
			return (1);
		}
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
