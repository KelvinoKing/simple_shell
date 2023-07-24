#include "shell.h"
/**
 * _strcat - concatenate tow strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;
	int j = 0, i = 0;

	/* counts the number of characters rep by pointer dest*/
	while (dest[i] != '\0')
	{
		count++;
		i++;
	}

	/*counts the number of characters rep by pointer src*/
	while (src[j] != '\0')
	{
		count2++;
		j++;
	}

	count2 = count + count2;
	j = 0;

	/*concatenate the strings*/
	for (i = count; i < count2; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
