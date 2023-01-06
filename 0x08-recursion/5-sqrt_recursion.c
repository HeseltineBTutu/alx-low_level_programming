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

	if (n == 0 || n == 1)
	{
		return (n);
	}
	int root = _sqrt_recursion(n - 1);
	if (root * root == n)
	{
		return (root);
	}
	else 
		return (-1);
}				
