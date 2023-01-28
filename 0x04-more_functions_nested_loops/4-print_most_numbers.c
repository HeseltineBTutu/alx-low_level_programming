#include "main.h"
/**
 * print_most_numbers- print the numbers from 0-9
 *
 * Return: does not return anything
 *
 */
void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
