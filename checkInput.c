#include "shell.h"

/**
 * _strcpy - copies string pointed to src to dest
 *
 * @dest: first argument
 * @src: second argument
 *
 * return: char
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/**
 * checkInput - Accepts user input
 * @inputCmd: user command
 *
 * Return: int
 */
int checkInput(char *inputCmd)
{
	char *buffer;
	size_t n = 10;
	ssize_t j;

	buffer = malloc(sizeof(char) * n);
	if (buffer == NULL)
	{
		return (1);
	}
	j = getline(&buffer, &n, stdin);
	if (j == -1)
	{
		free(buffer);
		return (1);
	}
	buffer[strcspn(buffer, "\n")] = '\0';
	if (buffer[0] != '\0')
	{
		_strcpy(inputCmd, buffer);
		free(buffer);
		return (0);
	}
	else
		return (1);
}
