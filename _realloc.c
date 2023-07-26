#include "shell.h"

/**
 * _realloc - reallocates memory for a given block
 * @ptr: pointer to previously allocated memory
 * @n: new size of the memory block
 * Return: Pointer to reallocated memory block
 */
char *_realloc(char *ptr, size_t n)
{
	char *newPtr;

	if (n == 0)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(n);
	if (newPtr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr != NULL)
	{
		memcpy(newPtr, ptr, n);
		free(ptr);
	}

	return (newPtr);
}
