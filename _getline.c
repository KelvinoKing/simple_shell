#include "shell.h"

/**
 * _getline - Reads a line of input from stdin
 * Return: pointer to read line or NULL.
 */

char *_getline(void)
{
	static char buffer[MAX_INPUT_LEN];
	static int pos, charsRead;
	char *line = NULL;
	int line_len = 0;
	int buf_size = sizeof(buffer) - 1; /* leave space for null terminator*/

	while (1)
	{
	if (pos >= charsRead)
	{
		charsRead = read(STDIN_FILENO, buffer, buf_size);
		if (charsRead <= 0)
		{
			if (line != NULL)
			free(line);
			return (NULL); /* EOF or error in input*/
		}
		
		pos = 0;
	}
	/*check for newline character in the buffer*/
	while (pos < charsRead)
	{
		if (buffer[pos] == '\n')
		{

		/* found newline, terminate the line and return it*/
		buffer[pos] = '\0';
		pos++;
		return (line);
		}

		pos++;
		line_len++;
	}
	/* if buffer is full and no newline found extend*/
		line = _realloc(line, line_len +  buf_size + 1);
		strncpy(line + line_len, buffer, buf_size);
		line_len += buf_size;
	}

}
