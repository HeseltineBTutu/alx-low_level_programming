#include<stdio.h>
/**
 * main- Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar(x + '0');
		}
		else
		{
			putchar(x + 'a' - 10);
		}
	}
	putchar('\n');
	return (0);
}
