#include "shell.h"
/**
 * _strncmp - compares two strings with specified number of strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 * Return: int
 */
int _strncmp(char *s1, char *s2, size_t n)
{
	size_t j;

	for (j = 0; j < n; j++)
	{
		if (s1[j] != s2[j])

			return (s1[j] - s2[j]);
		if (s1[j] == '\0')

			return (0);
	}
		return (0);
}
