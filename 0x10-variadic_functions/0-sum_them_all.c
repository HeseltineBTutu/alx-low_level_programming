#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the of.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
