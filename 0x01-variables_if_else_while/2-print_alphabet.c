#include<stdio.h>
#include<stdio.h>
#include <ctype.h>
/**
 * main- Entry point
 *
 * Description: print all alphabet letters in lower case
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (tolower(ch));
	putchar ('\n');

	return (0);
}
