#include "shell.h"

/**
 * main - Entry point for program
 * @argc: number of arguments
 * @argv: argument vector
 * @env: enviroments
 *
 * Return: int
 */
int main(__attribute__((unused)) int argc, char **argv,  char **env)
{
	char str[1024], *args[100], *argsPiped[100], *token;
	int i, interactiveMode = isatty(STDIN_FILENO);
	ssize_t bytRead;

	if (interactiveMode)
	{
		while (1)
		{
			callDir();

			if (checkInput(str))

				continue;

			i = checkForPipes(str, args, argsPiped, env);
			if (i == 1)
			{
				execute_func(args, argv, env);
			}
			if (i == 2)
				
			continue;
		}
	}
	else
	{
		while((bytRead = read(STDIN_FILENO, str, sizeof(str) - 1)) > 0)
		{
			str[bytRead] = '\0';
			token = strtok(str, "\n");
			while (token != NULL)
			{
				execute_command(token, env, argv);
				token = strtok(NULL, "\n");
			}
		}
	}
	return (0);
}
