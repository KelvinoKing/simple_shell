#include "shell.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: function parameter
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * checkForPipes - checks the user input for pipes
 * @str: command
 * @argv: array to hold commands
 *
 * Return: int
 */
int checkForPipes(char *str, char **argv)
{
	int i = 0;

	argv[i] = strtok(str, " ");
	while (argv[i] != NULL)
	{
		i++;
		argv[i] = strtok(NULL, " ");
	}
	return (1);
}
