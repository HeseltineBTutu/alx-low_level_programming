#include "main.h"
/**
 * _strcmp- a function that compare two strings.
 *
 * @s1: argument 1
 *
 * @s2: argument 2
 *
 * Return: difference
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			diff = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (diff);
}
