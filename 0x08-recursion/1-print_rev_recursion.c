#include "main.h"
/**
 * _print_rev_recursion- prijts a function in reverse order.
 *
 * @s: the string to be printed.
 *
 */
void _print_rev_recursion(char *s)
{
	int len = 0;

	if (s[len] != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
