#include "main.h"
/**
 * print- print the numbers from 0-9
 *
 * @2: to be skiped
 * @4: to be skiped
 *
 */
void print_most_numbers(void)
{
	int i, num2, num4;

	num2 = 50;
	num4 = 52;

	for (i = 48; i <= 57; i++)
	{
		if (i != num2 && i != num4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
