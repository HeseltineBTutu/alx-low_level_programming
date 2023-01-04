#include "main.h"
#include<string.h>
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
	char *a = accept;

	for (; *s; ++s)
	{
		for (; *a; ++a)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
