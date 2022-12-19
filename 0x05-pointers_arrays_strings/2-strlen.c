#include "main.h"
#include <string.h>
/**
 * _strlen- Entry point
 *
 * Description: a function that returns the length of a string.
 *
 * @s: modify s
 *
 * Return: length
 *
 */
int _strlen(char *s)
{
	int x;

	int length = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		length++;
	}
	return (length);
}
