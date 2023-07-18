#include "shell.h"

/**
 * get_ent - returns pointer to enviroment
 * @name: specified enviroment variable
 *
 * Return: pointer
 */
char *get_env(char *name)
{
	extern char **environ;
	size_t len, i = 0;

	if (name == NULL || environ == NULL)
		return (NULL);

	len = _strlen(name);
	while (environ[i] != NULL)
	{
		if (_strcmp(name, environ[i], len) == 0 && environ[i][le] == '=')
		{
			return (environ[i] + len + 1);
		}
		i++;
	}
	return (NULL);
}
