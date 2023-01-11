#include "main.h"
#include<string.io>
/**
 * str_concat- a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	/*+1 for the zero-terminator('\0')*/
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
		return ("");
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);

	return (result);
}
