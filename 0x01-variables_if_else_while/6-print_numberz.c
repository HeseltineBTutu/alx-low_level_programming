#include<stdio.h>
/**
 * main- Entry point
 *
 * Description: prints all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
