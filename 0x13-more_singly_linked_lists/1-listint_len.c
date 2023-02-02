#include "lists.h"
/**
 * listint_len - a functions that returns the number of elements in
 * a linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	while (h)
	{
		size_t count = 0;

		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
