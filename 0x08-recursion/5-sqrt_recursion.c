#include "main.h"
/**
 * _sqrt- returns squareroot
 *
 * @n: the number.
 * @i: value to be tested
 *
 * Return: returns the natural sqauare root of a number.
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion- returns squarevroot of a natural number.
 *
 * @n: number to find sqrt
 *
 * Return: sqrt, (-1) notba natural number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
