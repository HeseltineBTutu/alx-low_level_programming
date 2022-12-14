#include "main.h"
/**
 * print_alphabet_x10- Entry point
 *
 * Description: a function that prints 10 times the alphabet, in lowercase.
 *
 * Return: Does not return anything
 *
 */
void print_alphabet_x10(void)
{
	int x;
	char ch;

	for (x = 0; x < 10; x++)
	{
		for (ch = 97; ch < 123; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
