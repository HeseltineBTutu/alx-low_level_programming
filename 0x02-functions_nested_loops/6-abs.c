#include "main.h"
#include <stdlib.h>
/**
 * _abs-main entry
 *
 * Description:a function that computes the absolute value of an integer.
 *
 * @x: gives the absolute value of x
 *
 * Return: Always 0 (Success)
 *
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x = (-1) * x;
		return (x);
	}
}
