#include "lists.h"
/**
 * print_listint - a function that prints all the elements in
 *		linked list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf(" %d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
