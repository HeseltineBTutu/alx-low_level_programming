#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to get (starting from 0).
 *
 * Return: The value of the bit at the specified index or -1
 * if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) >> index);
}
