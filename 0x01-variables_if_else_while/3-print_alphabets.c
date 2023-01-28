#include<stdio.h>
#include<ctype.h>
/**
 * main- Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(tolower(ch));
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(toupper(ch));
	putchar('\n');
	return (0);
}
