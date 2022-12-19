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
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i >= 0)
	{
		_putchar(s[len - 1]);
		i--;
	}
	_putchar('\n');
}
