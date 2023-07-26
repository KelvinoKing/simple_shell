#include "shell.h"

/**
 * _getline - Reads a line of input from stdin
 * @lineptr: pointer to pointer of buffer
 * @n: initial size of buffer
 * @stream: pipeline in which data flows
 *
 * Return: pointer to read line or NULL.
 */

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t bufSize = 128, i = 0;
	int c;
	char *newBuf;

	if (lineptr == NULL || n == NULL || stream == NULL)
		return (-1);
	*lineptr = malloc(bufSize);
	if (*lineptr == NULL)
		return (-1);
	while ((c = fgetc(stream)) != EOF)
	{
		if (i >= bufSize - 1)
		{
			bufSize *= 2;
			newBuf = _realloc(*lineptr, bufSize);
			if (newBuf == NULL)
			{
				free(*lineptr);
				return (-1);
			}
			*lineptr = newBuf;
		}
		(*lineptr)[i++] = c;
		if (c == '\n')
			break;
	}
	(*lineptr)[i] = '\0';
	if (i == 0 && c == EOF)
	{
		free(*lineptr);
		return (-1);
	}
	*n = i + 1;
	return (i);
}
