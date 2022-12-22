#include "main.h"
/**
 * string_toupper -changes all lowercase letters of a string to uppercase
 *
 * @str : the string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *)
{
	int i;
	
	for (i = 0; s[i] != '\0' i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return s;
}
