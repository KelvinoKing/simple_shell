#include "shell.h"
/**
 * get_path - gets the path of the command
 * @cmd: command passed
 * Return: pointer to path
 */
char *get_path(char *cmd)
{
	char *path, *path_copy, *token, *filepath;
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
			filepath = malloc(sizeof(char) * (cmdlen + dirlen + 3));
			if (filepath == NULL)
				return (NULL);

		_strcpy(filepath, token);
		_strcat(filepath, "/");
		_strcat(filepath, cmd);
		_strcat(filepath, "\0");

		if (stat(filepath, &buf) == 0)
		{
			free(path_copy);
			return (filepath);
		}
		else
		{
			free(filepath);
			token = strtok(NULL, ":");
		}
	}
	free(path_copy);
	if (stat(cmd, &buf) == 0)
		return (cmd);
	return (NULL);
	}

	return (NULL);
}
