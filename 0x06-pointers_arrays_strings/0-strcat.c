#include "main.h"
#include<string.h>
/**
 * _strcat- function appends the src string to the dest string.
 *
 * @dest: to be concaneted
 *
 * @src: source
 *
 * Return: dest (Success)
 *
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	i = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
