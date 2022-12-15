#include "main.h"
#include <stdio.h>
/**
 * print_to_98- entry point
 *
 * @n - natural numbers
 *
 * Description: a function that prints all natural numbers from n to 98,
 * followed by a a new line
 *
 * Return: returns nothing
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
