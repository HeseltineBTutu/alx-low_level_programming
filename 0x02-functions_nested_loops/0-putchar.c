#include<stdio.h>
#include "main.h"
/**
 * main- Entry point
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char x[] = "_putchar";
	int y;

	for (y = 0; y < 8; y++)
	{
		_putchar(x[y]);
	}
	_putchar('\n');
	return (0);
}
