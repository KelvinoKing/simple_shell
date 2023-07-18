#include "shell.h"

/**
 * _strdup - returns pointer to newly allocated space to memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int length, i;
	char *arr;

	length = 0;
	if (str == NULL)
		return (NULL);
	length = _strlen(str);

	arr = malloc((length + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		arr[i] = str[i];

	arr[i] = '\0';

	return (arr);
}
