#include "shell.h"

/**
 * _strchr - Checks first occurence of specified character in string
 * @str: string to be checked
 * @ch: specified character
 *
 * Return: pointer
 */
char *_strchr(char *str, int ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (NULL);
}
