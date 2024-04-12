#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: A pointer to the first element of the array
 * @left: The starting index of the array
 * @right: The ending index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;


	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: A ponter to the first element of the array.
 * @size:  The number of elements in array.
 * @value: The target value to search for.
 *
 * Return:  the index where value is located, or if value
 *  is not present or NULL, it should return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
