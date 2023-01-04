#include "main.h"
#include<string.h>
#include<stddef.h>
/**
 * _strpbrk- function locates the first occurrence in the string s.
 *
 * @s: The string to be searched.
 *
 * @accept: The set of bytes to be searched for.
 *
 * Return: a pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
		if (strchr(accept, *s))
			return (s);
		s++;
	return (NULL);
}
