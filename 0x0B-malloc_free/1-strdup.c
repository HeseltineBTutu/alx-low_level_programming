#include "main.h"
#include<stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return: return the duplicate of str
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	copy = (char *)malloc(len);

	if (copy == NULL)
		return (NULL);

	memcpy(copy, str, len);
	return (copy);
}
