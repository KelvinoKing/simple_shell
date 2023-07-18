#include "shell.h"

/**
 * get_env - returns pointer to enviroment
 * @name: specified enviroment variable
 *
 * Return: pointer
 */
char *get_env(char *name)
{
	char **environ = __environ;
	size_t len, i = 0;

	if (name == NULL || environ == NULL)
		return (NULL);

	len = _strlen(name);
	while (environ[i] != NULL)
	{
		if (_strncmp(name, environ[i], len) == 0 && environ[i][len] == '=')
		{
			return (environ[i] + len + 1);
		}
		i++;
	}
	return (NULL);
}
