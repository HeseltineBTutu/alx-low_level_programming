#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc -a function that reallocates a memory block
 *
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space.
 * @new_size: is the size, in bytes of the new memmory block.
 *
 * Return: if new_size == old_size - ptr
 * if new_size == 0 and ptr is not NULL - NULL
 * Otherwise - a pointer to the reallocated memory block
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	memcpy(new_ptr, ptr, (new_size < old_size ? new_size : old_size));
	free(ptr);
	return (new_ptr);
}
