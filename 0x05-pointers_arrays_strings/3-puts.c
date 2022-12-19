#include "main.h"
#include <stdio.h>
/**
 * _puts- prints a string
 *
 * Description: a function that print a string.
 *
 * @str: string to be printed
 *
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
