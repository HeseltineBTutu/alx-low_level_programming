#include "main.h"
#include<string.h>
/**
 * rev_string-reverses a string.
 *
 * @s: to modify.
 *
 * Return: nothing
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int middle = len / 2;
	int temp;
	int i;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
