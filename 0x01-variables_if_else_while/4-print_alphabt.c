#include<stdio.h>
#include<ctype.h>
/**
 * main- Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
