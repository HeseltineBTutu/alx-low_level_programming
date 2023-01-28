#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * string_nconcat- a functin that concanates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: if the function fails -NULL.
 * Otherwise- apointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;

	if (n >= len2)
		result = (char *)malloc(len1 + len2 + 1);
	else
		result = (char *)malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);
	if (s1)
		memcpy(result, s1, len1);
	if (s2)
	{
		if (n >= len2)
		{
			memcpy(result + len1, s2, len2 + 1);
		}
		else
		{
			memcpy(result + len1, s2, n);
			result[len1 + n] = '\0';
		}
	}
		else
		{
			result[len1] = '\0';
	}
	return (result);
}
