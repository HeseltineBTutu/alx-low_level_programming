#include"main.h"
#include <stddef.h>
/**
 * _strchr- locate a characetre in a string
 *
 * @s: string
 *
 * @c: occurence of character
 *
 * Return: c
 *
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
