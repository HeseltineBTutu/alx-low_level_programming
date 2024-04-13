#include "search_algos.h"

/**
 * jump_search -  a function that searches for a value
 * in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located or (-1) if
 * value is not present in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	while (array[MIN(step, size) -  1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, prev + MIN(step, size));
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == MIN(step, size))
		{
			return (-1);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
