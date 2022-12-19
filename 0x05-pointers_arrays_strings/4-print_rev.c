#include "main.h"
#include <string.h>
/**
 * print_rev -prints a string, in reverse, followed by a new line.
 *
 * @s: prints string to print
 *
 * Return: return string
 *
 */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
