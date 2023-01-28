#include<stdio.h>
#include "main.h"
/**
 * print_alphabet- Entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: does not return anything
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
