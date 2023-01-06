#include "main.h"
/**
 * _sqrt_recursion- a function that returns the natural square root of a number.
 *
 * @n: the number.
 *
 * Return: returns the natural sqauare root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int guess = n / 2;
	if (guess * guess == n)
	{
		return (guess);
	}
	else
		return (_sqrt_recursion((guess + n / guess) / 2));
}				
