#include "main.h"
#include<string.h>
/**
 * _strcpy-a function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * , to the buffer pointed by dest
 *
 * @dest: where the content will be copied
 *
 * @src: source of content
 *
 * Return: dest (Success)
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
