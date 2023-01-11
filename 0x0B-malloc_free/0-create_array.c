#include "main.h"
#include<stddef.h>
/**
 * create_array- a function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: the size of the array.
 *  @c: the character
 *
 *  Return: return a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NUll);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
