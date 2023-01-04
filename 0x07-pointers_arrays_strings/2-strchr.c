#include"main.h"
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
	do
	{
		if (*S == c)
			return (s);
	}
	while (*s++);
	return (s);
}
