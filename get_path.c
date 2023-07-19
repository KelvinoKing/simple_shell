#include "shell.h"
/**
 * get_path - gets the path of the command
 * @cmd: command passed
 * Return: pointer to path
 */
char *get_path(char *cmd)
{
	char *path, *path_copy, *token;
	char *file_path = NULL;
	struct stat buf;
	int cmdlen, dirlen = 0;

	path = get_env("PATH");
	if (path)
	{
		path_copy = _strdup(path);
		cmdlen = _strlen(cmd);
		token = strtok(path_copy, ":");
		while (token != NULL)
		{
			dirlen = _strlen(token);
			file_path = malloc(sizeof(char) * (cmdlen + dirlen + 3));
			if (file_path == NULL)
			{
				return (NULL);
			}

		_strcpy(file_path, token);
		_strcat(file_path, "/");
		_strcat(file_path, cmd);
		_strcat(file_path, "\0");

		if (stat(file_path, &buf) == 0)
		{
			free(path_copy);
			return (file_path);
		}
		else
		{
			free(file_path);
			token = strtok(NULL, ":");
		}
	}
	free(path_copy);
	if (stat(cmd, &buf) == 0)
	{
		return (cmd);
	}
		return (NULL);
	}
	return (NULL);
}
