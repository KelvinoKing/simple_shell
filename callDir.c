#include "shell.h"
/**
 * callDir - gets the command window
 *
 * Return: void
 */
void callDir(void)
{
	write(STDOUT_FILENO, "$", 2);
}

