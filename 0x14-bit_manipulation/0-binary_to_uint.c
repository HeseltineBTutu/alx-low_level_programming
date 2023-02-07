#include "main.h"

/**
 * binary_to_uint - a function that convert a binary to an 
 *			unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number or , 0 if:
 * 		These is one or more chars in the b that is not
 * 		0 or 1 or
 * 		b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}

