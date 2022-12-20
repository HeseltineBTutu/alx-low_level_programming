#include "main.h"
/**
 * _atoi- Entry point
 *
 * Description: convert a string to an integer
 *
 * Return: if there a no numbers, return 0.
 *
 */
int _atoi(char *s)
{
	int i;

	unsigned int result  = 0;
	int sign = 1;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			result = (result * 10) + (s[i] - '\0');
		else if (result > 0)
			break;
	}
	return sign * result;
}
