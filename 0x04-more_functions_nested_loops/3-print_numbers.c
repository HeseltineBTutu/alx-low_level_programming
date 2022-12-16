#include "main.h"
#include <unistd.h>
/**
 * print_numbers- a function that prints the numbers, from 0 to 9
 *
 * Return: return nothing
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
