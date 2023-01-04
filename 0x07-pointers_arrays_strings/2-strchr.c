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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
