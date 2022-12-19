#include "main.h"
/**
 * swap_int - entry point
 *
 * Description: a function that swaps the values of two integers.
 *
 * @a: value of param1
 * @b: value of param2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
