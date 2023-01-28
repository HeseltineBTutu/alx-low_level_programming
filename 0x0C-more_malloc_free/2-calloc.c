#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * _calloc -a funuction that allocates memory for an array using malloc.
 *
 * @nmemb: array elements.
 * @size : bytes
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
