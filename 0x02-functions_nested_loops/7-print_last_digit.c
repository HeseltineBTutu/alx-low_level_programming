#include "main.h"
/**
 * print_last_digit- entry point
 *
 * Description: a function that prints the last digit of a number.
 *
 * @n: integer for modification
 *
 * Return: Always 0 (Success)
 *
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x = (-1 * x);
	_putchar(x + '0');
	return (x);
}
