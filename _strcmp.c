#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: first param
 * @s2: second param
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0, count1 = 0, count2 = 0;
	int i;

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	if (count1 < count2)
	{
		int temp = count1;

		count1 = count2;
		count2 = temp;

	}
	for (i = 0; i < count1; i++)
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
	return (diff);
}
