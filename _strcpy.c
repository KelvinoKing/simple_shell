#include "shell.h"

/**
 * _strcpy - copies string pointed to src to dest
 * @dest: first argument
 * @src: second argument
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

