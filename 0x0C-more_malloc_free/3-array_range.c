#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * array_range -creates an array integers.
 *
 * @min: minimum range
 * @max: maximum range
 *
 * Return: the pointer to the newly created array.
 *
 */
int *array_range(int min, int max)
{
	int size;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
