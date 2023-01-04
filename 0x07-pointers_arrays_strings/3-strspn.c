#include "main.h"
#include <string.h>
/**
 * _strspn- a function that gets the length of a prefix substring.
 *
 * @s:initial segment
 *
 * @accept: the prefix to be measured
 *
 * Return: he number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s++))
		count++;
	return (count);
}
