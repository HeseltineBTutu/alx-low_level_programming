#include "main.h"
/**
 * is_prime_number- function to find a prime number.
 *
 * @n: the  number
 *
 * Return: 1 if the integer is a prime number.
 *
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	else
	{
		if (n % 2 == 0 || is_prime_number(n - 1))
		{
		return (0);
		}
		else
		{
			return (1);
		}
	}
}
