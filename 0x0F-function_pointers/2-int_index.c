#include "function_pointers.h"
/**
 * int_index- a fuction that saerches for an integer.
 *
 * @array: where the elements are stored.
 * @size: the number of elements
 * @cmp: a pointer to the function to be used to compared values.
 *
 * Return: returns the index of the first element,
 * if no element matches, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

